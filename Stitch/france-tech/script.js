// Translation Dictionary
// Global Click Spark Logic
document.addEventListener('click', (e) => {
    // Generate 12 sparks per click 
    for (let i = 0; i < 12; i++) {
        const spark = document.createElement('div');
        spark.className = 'click-spark';
        
        // Random dimensions for variety
        const size = Math.random() * 4 + 2;
        spark.style.width = `${size}px`;
        spark.style.height = `${size}px`;
        spark.style.left = `${e.clientX - size/2}px`;
        spark.style.top = `${e.clientY - size/2}px`;
        
        document.body.appendChild(spark);
        
        // Random outward projection math
        const angle = Math.random() * Math.PI * 2;
        const velocity = Math.random() * 60 + 20; 
        const tx = Math.cos(angle) * velocity;
        const ty = Math.sin(angle) * velocity;
        
        gsap.to(spark, {
            x: tx,
            y: ty + 30, // slight gravity effect
            opacity: 0,
            scale: 0.1,
            rotation: Math.random() * 180,
            duration: 0.6 + Math.random() * 0.4,
            ease: "power2.out",
            onComplete: () => spark.remove()
        });
    }
});

const i18n = {
    EN: {
        navTitle: "FranceTech",
        heroTitle: "Innovative France: Leading the Future",
        heroSubtitle: "Discover the technological marvels and pioneering spirit of the French Republic. From aerospace engineering to the thriving startup ecosystem.",
        exploreBtn: "Explore More",
        aeroTitle: "Airbus & Aviation",
        aeroDesc: "Europe's largest aeronautics and space company, shaping the future of air travel with sustainable and cutting-edge aircraft. Airbus symbolizes French and European engineering excellence.",
        spaceTitle: "Arianespace",
        spaceDesc: "Guaranteeing reliable access to space. France has been at the forefront of the European space program with its powerful Ariane rockets, launching critical satellites for global communication.",
        trainTitle: "TGV & High-Speed Rail",
        trainDesc: "The Train à Grande Vitesse revolutionized rail travel, setting world records and connecting Europe at unprecedented speeds, offering a sustainable alternative to short-haul flights.",
        techTitle: "La French Tech",
        techDesc: "A vibrant startup ecosystem fueling digital innovation, AI infrastructure, and a robust environment for technology entrepreneurs globally, fostering unicorns across various sectors.",
        footerText: "© 2026 France Technology Hub. Designed with elegance.",
        readMoreAero: "Read Full Story",
        abHeroTitle: "Airbus: Pioneering the Skies",
        abHeroDesc: "Explore the legacy and future of European aviation, leading the charge towards zero-emission flights and unparalleled engineering.",
        abSection1Title: "A Legacy of Innovation",
        abSection1Desc: "Founded as a European consortium, Airbus revolutionized the aviation market by creating wide-body twin-engine aircraft and the iconic A380 double-decker. Today, it stands as the vanguard of sustainable aerospace solutions.",
        abSection2Title: "The ZEROe Initiative",
        abSection2Desc: "Looking to the future, Airbus is developing ZEROe, the world's first zero-emission commercial aircraft concept. Utilizing hydrogen propulsion, these revolutionary designs aim to enter service by 2035.",
        backHome: "Back to Home",
        tabHome: "Home",
        tabAirbus: "Airbus",
        tabRafale: "Rafale",
        rafaleTitle: "Dassault Rafale",
        rafaleDesc: "The omnirole fighter jet symbolizing French aerial supremacy.",
        rafaleBoxTitle: "Interactive Spotlight Reveal",
        rafaleBoxDesc: "Hover your mouse over this dark void to activate the spotlight tracking and reveal the magnificent Dassault Rafale jet hidden in the background!",
        tabTech: "Technology",
        techPageHeroTitle: "Industrial Technologies",
        techPageHeroDesc: "Select a sector to explore France's monumental achievements in engineering, aviation, and high-speed terrestrial transport.",
        tabTGV: "TGV",
        tabStartups: "Startups",
        tgvHeroTitle: "TGV: The Speed of Tomorrow",
        tgvHeroDesc: "Connecting the European continent through groundbreaking high-speed rail networks, holding global speed records, and redefining sustainable transport.",
        tgvSection1Title: "Pioneering High-Speed Rail",
        tgvSection1Desc: "Since its launch in 1981 between Paris and Lyon, the Train à Grande Vitesse revolutionized travel. The TGV system has continuously shattered world speed records for wheeled trains, cementing France's position as a global leader in railway technology.",
        tgvSection2Title: "Engineering the TGV M",
        tgvSection2Desc: "The latest generation, the TGV M (Avelia Horizon), represents a massive leap in eco-friendly design, featuring a 20% reduction in energy consumption, increased modularity, and fully digital diagnostic systems driving the 21st century's travel experience.",
        startupsHeroTitle: "La French Tech",
        startupsHeroDesc: "Europe's most vibrant and dynamic tech ecosystem, powering deep-tech unicorns, AI pioneers, and world-class software platforms.",
        startupsSection1Title: "A Unicorn Factory",
        startupsSection1Desc: "Backed by national initiatives and massive private investment, France has successfully nurtured over 25 software \"unicorns\" and tech giants including Doctolib, Back Market, Shift Technology, and Sorare, reshaping industries globally.",
        startupsSection2Title: "Station F & AI Dominance",
        startupsSection2Desc: "Station F in Paris is the world's largest startup campus, hosting thousands of entrepreneurs. Beyond startups, France is leading European Artificial Intelligence research via homegrown champions like Mistral AI and strategic partnerships with global tech leaders.",
        readMoreTGV: "Read Full Story",
        readMoreTech: "Read Full Story"
    },
    FR: {
        navTitle: "FranceTech",
        heroTitle: "La France Innovante: À la Pointe du Futur",
        heroSubtitle: "Découvrez les merveilles technologiques et l'esprit pionnier de la République Française. De l'ingénierie aérospatiale à l'écosystème florissant des startups.",
        exploreBtn: "Explorer Plus",
        aeroTitle: "Airbus & Aviation",
        aeroDesc: "La plus grande entreprise aéronautique et spatiale d'Europe, façonnant l'avenir des voyages aériens avec des avions durables et de pointe. Airbus symbolise l'excellence en ingénierie française et européenne.",
        spaceTitle: "Arianespace",
        spaceDesc: "Garantir un accès fiable à l'espace. La France a toujours été à la pointe du programme spatial européen avec ses puissantes fusées Ariane, lançant des satellites essentiels pour la communication mondiale.",
        trainTitle: "TGV & Trains à Grande Vitesse",
        trainDesc: "Le Train à Grande Vitesse a révolutionné les voyages ferroviaires, battant des records du monde et reliant l'Europe à des vitesses sans précédent, offrant une alternative durable aux vols court-courriers.",
        techTitle: "La French Tech",
        techDesc: "Un écosystème de startups dynamique stimulant l'innovation numérique, l'infrastructure d'IA et un environnement solide pour les entrepreneurs technologiques à l'échelle mondiale, favorisant les lancements de licornes dans divers secteurs.",
        footerText: "© 2026 Hub Technologique Français. Conçu avec élégance.",
        readMoreAero: "Lire l'histoire complète",
        abHeroTitle: "Airbus : Pionnier des Cieux",
        abHeroDesc: "Explorez l'héritage et l'avenir de l'aviation européenne, menant la charge vers des vols sans émissions et une ingénierie inégalée.",
        abSection1Title: "Un Héritage d'Innovation",
        abSection1Desc: "Fondé en tant que consortium européen, Airbus a révolutionné le marché de l'aviation en créant des avions de ligne gros porteurs biréacteurs et l'emblématique A380 à deux ponts. Aujourd'hui, il est à l'avant-garde des solutions aérospatiales durables.",
        abSection2Title: "L'Initiative ZEROe",
        abSection2Desc: "Tourné vers l'avenir, Airbus développe ZEROe, le tout premier concept d'avion commercial zéro émission au monde. Utilisant la propulsion hydrogène, ces conceptions révolutionnaires visent à entrer en service d'ici 2035.",
        backHome: "Retour à l'accueil",
        tabHome: "Accueil",
        tabAirbus: "Airbus",
        tabRafale: "Rafale",
        rafaleTitle: "Dassault Rafale",
        rafaleDesc: "L'avion de chasse omnirôle symbolisant la suprématie aérienne française.",
        rafaleBoxTitle: "Révélation Interactive",
        rafaleBoxDesc: "Survolez ce vide sombre avec votre souris pour activer le suivi du projecteur et révéler le magnifique avion Dassault Rafale caché en arrière-plan !",
        tabTech: "Technologies",
        techPageHeroTitle: "Technologies Industrielles",
        techPageHeroDesc: "Sélectionnez un secteur pour explorer les réalisations monumentales de la France dans l'ingénierie, l'aviation et les transports terrestres à grande vitesse.",
        tabTGV: "TGV",
        tabStartups: "Startups",
        tgvHeroTitle: "TGV : La Vitesse de Demain",
        tgvHeroDesc: "Relier le continent européen grâce à des réseaux ferroviaires à grande vitesse révolutionnaires, détenir des records de vitesse mondiaux et redéfinir les transports durables.",
        tgvSection1Title: "Pionniers du chemin de fer à grande vitesse",
        tgvSection1Desc: "Depuis son lancement en 1981 entre Paris et Lyon, le Train à Grande Vitesse a révolutionné les voyages. Le système TGV a continuellement battu les records du monde de vitesse pour les trains équipés de roues, consolidant la position de la France en tant que leader mondial de la technologie ferroviaire.",
        tgvSection2Title: "Ingénierie du TGV M",
        tgvSection2Desc: "La dernière génération, le TGV M (Avelia Horizon), représente une avancée massive dans la conception écologique, avec une réduction de 20% de la consommation d'énergie, une modularité accrue et des systèmes de diagnostic entièrement numériques stimulant l'expérience de voyage du 21e siècle.",
        startupsHeroTitle: "La French Tech",
        startupsHeroDesc: "L'écosystème technologique le plus dynamique et vibrant d'Europe, propulsant des licornes de la deep tech, des pionniers de l'IA et des plateformes logicielles de classe mondiale.",
        startupsSection1Title: "Une Usine à Licornes",
        startupsSection1Desc: "Soutenue par des initiatives nationales et des investissements privés massifs, la France a nourri avec succès plus de 25 \"licornes\" logicielles et géants de la technologie, notamment Doctolib, Back Market, Shift Technology et Sorare, remodelant les industries à l'échelle mondiale.",
        startupsSection2Title: "Station F & Domination dans l'IA",
        startupsSection2Desc: "Station F à Paris est le plus grand campus de startups au monde, accueillant des milliers d'entrepreneurs. Au-delà des startups, la France mène la recherche européenne en Intelligence Artificielle grâce à des champions nationaux comme Mistral AI et des partenariats stratégiques avec des leaders technologiques mondiaux.",
        readMoreTGV: "Lire l'histoire complète",
        readMoreTech: "Lire l'histoire complète"
    }
};

let currentLang = 'EN';

// DOM Elements (legacy navbar — may be null if PillNav is active)
const themeToggleBtn = document.getElementById('theme-toggle');
const langToggleBtn = document.getElementById('lang-toggle');

// Theme Toggle (legacy)
if (themeToggleBtn) {
    const themeIcon = themeToggleBtn.querySelector('i');
    themeToggleBtn.addEventListener('click', () => {
        document.body.classList.toggle('dark-mode');
        if (document.body.classList.contains('dark-mode')) {
            themeIcon.classList.remove('fa-sun');
            themeIcon.classList.add('fa-moon');
        } else {
            themeIcon.classList.remove('fa-moon');
            themeIcon.classList.add('fa-sun');
        }
    });
}

// Language Toggle (legacy)
if (langToggleBtn) {
    const langLabel = document.getElementById('current-lang');
    langToggleBtn.addEventListener('click', () => {
        currentLang = currentLang === 'EN' ? 'FR' : 'EN';
        if (langLabel) langLabel.textContent = currentLang;
        updateLanguage();
    });
}

function updateLanguage() {
    const elements = document.querySelectorAll('[data-i18n]');
    elements.forEach(el => {
        const key = el.getAttribute('data-i18n');
        if (i18n[currentLang][key]) {
            el.textContent = i18n[currentLang][key];
        }
    });
}

// Expose setAppLang for PillNav React component
window.setAppLang = function(lang) {
    currentLang = lang;
    updateLanguage();
};
// Scroll Animations using Intersection Observer
const observerOptions = {
    root: null,
    rootMargin: '0px',
    threshold: 0.1
};

const observer = new IntersectionObserver((entries, observer) => {
    entries.forEach(entry => {
        if (entry.isIntersecting) {
            entry.target.classList.add('visible');
            observer.unobserve(entry.target);
        }
    });
}, observerOptions);

document.addEventListener('DOMContentLoaded', () => {
    // Start observing elements for animation
    const elementsToObserve = document.querySelectorAll('.observer-item');
    elementsToObserve.forEach(el => observer.observe(el));
    
    // Initialize language
    updateLanguage();
    
    // Scroll event for hero button
    const exploreBtn = document.querySelector('.primary-btn');
    const contentSection = document.getElementById('content-section');
    if (exploreBtn && contentSection) {
        exploreBtn.addEventListener('click', () => {
            contentSection.scrollIntoView({
                behavior: 'smooth'
            });
        });
    }

    // Scroll listener for HD video bg fade
    const scrollVideoBg = document.getElementById('scroll-video-bg');
    if (scrollVideoBg) {
        window.addEventListener('scroll', () => {
            // Fade in video as we scroll past 40% of viewport height
            if (window.scrollY > window.innerHeight * 0.4) {
                scrollVideoBg.style.opacity = '1';
            } else {
                scrollVideoBg.style.opacity = '0';
            }
        });
    }

    // Add Global Scroll Progress Bar
    const progressBar = document.createElement('div');
    progressBar.id = 'global-progress-bar';
    Object.assign(progressBar.style, {
        position: 'fixed',
        top: '0',
        left: '0',
        height: '4px',
        background: 'linear-gradient(90deg, #60a5fa, #FF79C6)',
        width: '0%',
        zIndex: '99999',
        boxShadow: '0 0 10px rgba(255, 121, 198, 0.8)',
        transition: 'width 0.1s ease-out',
        pointerEvents: 'none'
    });
    document.body.appendChild(progressBar);

    const updateProgressBar = () => {
        const docHeight = document.documentElement.scrollHeight - window.innerHeight;
        const progress = docHeight > 0 ? (window.scrollY / docHeight) * 100 : 0;
        progressBar.style.width = `${progress}%`;
    };

    window.addEventListener('scroll', updateProgressBar);
    window.addEventListener('resize', updateProgressBar);

    // Rafale Spotlight Reveal Logic
    const rafaleBox = document.getElementById('rafale-container');
    const revealImg = document.getElementById('reveal-img');
    if (rafaleBox && revealImg) {
        rafaleBox.addEventListener('mousemove', (e) => {
            const rect = rafaleBox.getBoundingClientRect();
            const x = e.clientX - rect.left;
            const y = e.clientY - rect.top;
            revealImg.style.setProperty('--mx', `${x}px`);
            // Adding a small offset as done in the react code to center the spotlight directly behind the mouse tip
            revealImg.style.setProperty('--my', `${y}px`); 
            
            // On movement, increase opacity for drama
            revealImg.style.opacity = '1';
        });

        rafaleBox.addEventListener('mouseleave', () => {
            revealImg.style.setProperty('--mx', '-9999px');
            revealImg.style.setProperty('--my', '-9999px');
            // Dim down when hovering out
            revealImg.style.opacity = '0.25';
        });
    }

    // --- Custom Smooth Rafale Cursor ---
    const cursorJet = document.createElement('div');
    cursorJet.id = 'custom-cursor-jet';
    cursorJet.innerHTML = `
        <svg viewBox="0 0 100 100" width="40" height="40" fill="currentColor">
           <polygon points="50,5 42,30 42,85 50,95 58,85 58,30" />
           <polygon points="42,45 10,75 42,75" />
           <polygon points="58,45 90,75 58,75" />
           <polygon points="42,25 25,35 42,35" />
           <polygon points="58,25 75,35 58,35" />
        </svg>
    `;
    cursorJet.style.color = "var(--primary-color)";
    document.body.appendChild(cursorJet);

    let mouseX = window.innerWidth / 2;
    let mouseY = window.innerHeight / 2;
    let jetX = mouseX;
    let jetY = mouseY;
    let angle = 0;
    let frameCount = 0;

    window.addEventListener('mousemove', (e) => {
        mouseX = e.clientX;
        mouseY = e.clientY;
    });

    function createCloud(x, y) {
        const cloud = document.createElement('div');
        cloud.className = 'cloud-trail';
        cloud.style.left = `${x}px`;
        cloud.style.top = `${y}px`;
        document.body.appendChild(cloud);
        setTimeout(() => cloud.remove(), 800);
    }

    function animateJet() {
        const dx = mouseX - jetX;
        const dy = mouseY - jetY;
        
        // Smooth lerping mechanism
        jetX += dx * 0.15;
        jetY += dy * 0.15;
        
        // Calculate angle if moving
        if (Math.abs(dx) > 1 || Math.abs(dy) > 1) {
            const targetAngle = Math.atan2(dy, dx) * (180 / Math.PI) + 90;
            let angleDiff = targetAngle - angle;
            
            // Normalize for shortest path rotation
            if (angleDiff > 180) angleDiff -= 360;
            if (angleDiff < -180) angleDiff += 360;
            
            angle += angleDiff * 0.15;
            
            // Spawn clouds every few frames to create a contrail
            frameCount++;
            if (frameCount % 2 === 0) {
                const moveRad = (angle - 90) * (Math.PI / 180);
                
                // Left engine contrail
                createCloud(
                    jetX - Math.cos(moveRad) * 15 + Math.cos(moveRad - Math.PI/2) * 8,
                    jetY - Math.sin(moveRad) * 15 + Math.sin(moveRad - Math.PI/2) * 8
                );
                
                // Right engine contrail
                createCloud(
                    jetX - Math.cos(moveRad) * 15 + Math.cos(moveRad + Math.PI/2) * 8,
                    jetY - Math.sin(moveRad) * 15 + Math.sin(moveRad + Math.PI/2) * 8
                );
            }
        }
        
        cursorJet.style.transform = `translate(${jetX}px, ${jetY}px) rotate(${angle}deg)`;
        requestAnimationFrame(animateJet);
    }
    animateJet();
});
