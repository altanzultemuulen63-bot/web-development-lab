document.addEventListener('DOMContentLoaded', () => {
    // 1. Dark mode солих товчны логик
    const themeToggleBtn = document.getElementById('theme-toggle');
    const htmlElement = document.documentElement;

    // Өмнөх төлөвийг шалгах (localStorage)
    const savedTheme = localStorage.getItem('theme') || 'light';
    if (savedTheme === 'dark') {
        htmlElement.setAttribute('data-theme', 'dark');
        themeToggleBtn.textContent = '☀️ Light Mode';
    }

    themeToggleBtn.addEventListener('click', () => {
        const currentTheme = htmlElement.getAttribute('data-theme');
        if (currentTheme === 'dark') {
            htmlElement.setAttribute('data-theme', 'light');
            localStorage.setItem('theme', 'light');
            themeToggleBtn.textContent = '🌙 Dark Mode';
        } else {
            htmlElement.setAttribute('data-theme', 'dark');
            localStorage.setItem('theme', 'dark');
            themeToggleBtn.textContent = '☀️ Light Mode';
        }
    });

    // 2. 3D Flip Card товчны логик
    const flipCard = document.getElementById('interactive-flip-card');
    const flipBtn = document.getElementById('flip-btn');

    flipBtn.addEventListener('click', () => {
        flipCard.classList.toggle('flipped');
    });
});