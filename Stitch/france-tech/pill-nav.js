// PillNav — React component with GSAP sliding pill indicator
const { useRef, useEffect, useState, useCallback } = React;

function PillNav({
    items = [],
    activeHref = '/',
    baseColor = '#000000',
    pillColor = '#ffffff',
    hoveredPillTextColor = '#ffffff',
    pillTextColor = '#000000',
    theme = 'dark',
    ease = 'power2.easeOut',
}) {
    const navRef = useRef(null);
    const itemRefs = useRef([]);
    const [hoveredIdx, setHoveredIdx] = useState(null);
    const [currentLang, setCurrentLang] = useState('EN');

    // Determine active index from current page
    const currentPage = window.location.pathname.split('/').pop() || 'index.html';
    const activeIdx = items.findIndex(item => {
        const href = item.href.split('/').pop() || 'index.html';
        return href === currentPage;
    });

    // Toggle theme handler  
    const handleThemeToggle = () => {
        document.body.classList.toggle('dark-mode');
        const icon = document.querySelector('#theme-toggle-pill i');
        if (document.body.classList.contains('dark-mode')) {
            icon.classList.remove('fa-sun');
            icon.classList.add('fa-moon');
        } else {
            icon.classList.remove('fa-moon');
            icon.classList.add('fa-sun');
        }
    };

    // Toggle lang handler
    const handleLangToggle = () => {
        const newLang = currentLang === 'EN' ? 'FR' : 'EN';
        setCurrentLang(newLang);
        // Trigger the global updateLanguage from script.js
        if (typeof window.setAppLang === 'function') {
            window.setAppLang(newLang);
        }
    };

    // Determine dynamic colors based on theme
    const isDark = theme === 'dark';

    return React.createElement('nav', {
        ref: navRef,
        className: 'pill-nav',
        style: {
            '--pill-bg': isDark ? 'rgba(255,255,255,0.15)' : 'rgba(0,0,0,0.08)',
            '--pill-active': isDark ? '#60a5fa' : '#2563eb',
        }
    },
        // Logo
        React.createElement('a', { href: 'index.html', className: 'pill-nav-logo' },
            React.createElement('i', { className: 'fa-solid fa-plane-departure' }),
            React.createElement('span', null, 'FranceTech'),
        ),

        // Nav items container
        React.createElement('div', { className: 'pill-nav-items' },
            // Nav items
            ...items.map((item, i) =>
                React.createElement('a', {
                    key: i,
                    ref: (el) => itemRefs.current[i] = el,
                    href: item.href,
                    className: `pill-nav-item ${i === activeIdx ? 'active' : ''}`,
                    onMouseEnter: () => setHoveredIdx(i),
                    onMouseLeave: () => setHoveredIdx(null),
                    'data-i18n': item.i18nKey || undefined,
                }, item.label)
            ),
        ),

        // Controls
        React.createElement('div', { className: 'pill-nav-controls' },
            React.createElement('button', {
                className: 'pill-nav-btn',
                onClick: handleLangToggle,
                'aria-label': 'Toggle Language',
            },
                React.createElement('i', { className: 'fa-solid fa-language' }),
                React.createElement('span', null, ` ${currentLang}`),
            ),
            React.createElement('button', {
                id: 'theme-toggle-pill',
                className: 'pill-nav-btn',
                onClick: handleThemeToggle,
                'aria-label': 'Toggle Theme',
            },
                React.createElement('i', { className: 'fa-solid fa-moon' }),
            ),
        ),
    );
}

// Mount PillNav
document.addEventListener('DOMContentLoaded', () => {
    const mountEl = document.getElementById('pill-nav-root');
    if (mountEl) {
        const root = ReactDOM.createRoot(mountEl);
        root.render(React.createElement(PillNav, {
            items: [
                { label: 'Home', href: 'index.html', i18nKey: 'tabHome' },
                { label: 'Technology', href: 'technology.html', i18nKey: 'tabTech' },
                { label: 'Rafale', href: 'rafale.html', i18nKey: 'tabRafale' },
                { label: 'Startups', href: 'startups.html', i18nKey: 'tabStartups' },
            ],
            activeHref: window.location.pathname,
            theme: document.body.classList.contains('dark-mode') ? 'dark' : 'light',
            ease: 'power2.easeOut',
            pillColor: '#60a5fa',
        }));
    }
});
