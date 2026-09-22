const { useRef, useEffect } = React;

function FloatingLines({
    enabledWaves = ["top", "middle", "bottom"],
    lineCount = 5,
    lineDistance = 5,
    bendRadius = 5,
    bendStrength = -0.5,
    interactive = true,
    parallax = true
}) {
    const canvasRef = useRef(null);
    const mouse = useRef({ x: -1000, y: -1000 });
    const scrollY = useRef(0);

    useEffect(() => {
        const canvas = canvasRef.current;
        const ctx = canvas.getContext('2d');
        let animationFrameId;
        let time = 0;

        const handleResize = () => {
            canvas.width = window.innerWidth;
            canvas.height = window.innerHeight;
        };
        handleResize();
        window.addEventListener('resize', handleResize);

        const handleMouseMove = (e) => {
            if (!interactive) return;
            mouse.current.x = e.clientX;
            mouse.current.y = e.clientY;
        };
        if (interactive) window.addEventListener('mousemove', handleMouseMove);

        const handleScroll = () => {
            if (!parallax) return;
            scrollY.current = window.scrollY;
        };
        if (parallax) window.addEventListener('scroll', handleScroll);

        const draw = () => {
            ctx.clearRect(0, 0, canvas.width, canvas.height);
            time += 0.015;

            // Definition for wave base Y positions
            const waves = {
                top: canvas.height * 0.25,
                middle: canvas.height * 0.5,
                bottom: canvas.height * 0.75
            };

            enabledWaves.forEach((waveId, waveIndex) => {
                const baseY = waves[waveId] || (canvas.height * 0.5);

                for (let i = 0; i < lineCount; i++) {
                    ctx.beginPath();
                    
                    // Offset each line from the baseY
                    const yOffset = (i - lineCount / 2) * lineDistance * 4; 
                    
                    // Gradient opacity for edges
                    let alpha = 1 - Math.abs(i - lineCount / 2) / (lineCount / 2);
                    // Base color: Tech pink/purple to match the theme
                    ctx.strokeStyle = `rgba(207, 158, 255, ${Math.max(0.1, alpha * 0.5)})`;
                    if (waveId === "middle") {
                        ctx.strokeStyle = `rgba(0, 240, 255, ${Math.max(0.1, alpha * 0.4)})`;
                    }
                    if (waveId === "top") {
                        ctx.strokeStyle = `rgba(255, 121, 198, ${Math.max(0.1, alpha * 0.4)})`;
                    }
                    
                    ctx.lineWidth = 1.5;

                    const numPoints = 150;
                    for (let p = 0; p <= numPoints; p++) {
                        const x = (p / numPoints) * canvas.width;
                        
                        // Parallax shift based on scroll
                        const pShift = parallax ? scrollY.current * (0.05 + waveIndex * 0.05) : 0;
                        
                        // Compute base wave Math
                        const freq = (x / canvas.width) * Math.PI * 3;
                        let y = baseY + yOffset - pShift;
                        
                        // Add sine wave oscillation
                        y += Math.sin(freq + time + i * 0.1) * 40;
                        y += Math.cos(freq * 2 - time * 0.8 + waveIndex) * 20;

                        // Add interactivity mouse bend effect
                        if (interactive) {
                            const dx = x - mouse.current.x;
                            const dy = y - mouse.current.y;
                            const dist = Math.sqrt(dx * dx + dy * dy);
                            
                            // Bend Radius mapped realistically (e.g., 5 => 300px)
                            const influenceZone = bendRadius * 60;
                            if (dist < influenceZone) {
                                const force = Math.pow(1 - dist / influenceZone, 2);
                                // Negative bend pushes away, positive pulls closer
                                const bendDirection = -Math.sign(bendStrength);
                                const displacement = force * Math.abs(bendStrength) * 150 * bendDirection;
                                
                                y += displacement;
                            }
                        }

                        if (p === 0) {
                            ctx.moveTo(x, y);
                        } else {
                            ctx.lineTo(x, y);
                        }
                    }
                    ctx.stroke();
                }
            });

            animationFrameId = requestAnimationFrame(draw);
        };

        draw();

        return () => {
            window.removeEventListener('resize', handleResize);
            window.removeEventListener('mousemove', handleMouseMove);
            window.removeEventListener('scroll', handleScroll);
            cancelAnimationFrame(animationFrameId);
        };
    }, [enabledWaves, lineCount, lineDistance, bendRadius, bendStrength, interactive, parallax]);

    return React.createElement('canvas', {
        ref: canvasRef,
        style: {
            width: '100%',
            height: '100%',
            display: 'block'
        }
    });
}

// Mount the component
const mountNode = document.getElementById('floating-lines-root') || document.getElementById('react-bg-root');
if (mountNode) {
    const root = ReactDOM.createRoot(mountNode);
    // Use the div structure requested by user, but adapting sizes for background
    root.render(
        React.createElement("div", { style: { width: '100vw', height: '100vh', position: 'fixed', top: 0, left: 0, zIndex: -2, pointerEvents: 'none' } },
            React.createElement(FloatingLines, {
                enabledWaves: ["top", "middle", "bottom"],
                lineCount: 5,
                lineDistance: 5,
                bendRadius: 5,
                bendStrength: -0.5,
                interactive: true,
                parallax: true
            })
        )
    );
}
