<!DOCTYPE html>
<html lang="fr">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>TOURNOI LA LÉGENDE 3 - Votez pour vos créateurs préférés</title>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css">
    <style>
        :root {
            --primary: #6a11cb;
            --secondary: #2575fc;
            --accent: #ff0050;
            --dark: #121212;
            --light: #f8f9fa;
            --success: #28a745;
        }
        
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
            font-family: 'Montserrat', sans-serif;
        }
        
        body {
            background: linear-gradient(135deg, var(--dark), #2c3e50);
            color: var(--light);
            min-height: 100vh;
            background-attachment: fixed;
        }
        
        header {
            background: rgba(0, 0, 0, 0.8);
            backdrop-filter: blur(10px);
            padding: 1rem 2rem;
            position: sticky;
            top: 0;
            z-index: 100;
            display: flex;
            justify-content: space-between;
            align-items: center;
            box-shadow: 0 4px 20px rgba(0, 0, 0, 0.3);
        }
        
        .logo {
            font-size: 2rem;
            font-weight: 800;
            background: linear-gradient(to right, var(--primary), var(--secondary));
            -webkit-background-clip: text;
            background-clip: text;
            color: transparent;
            display: flex;
            align-items: center;
        }
        
        .logo span {
            color: var(--accent);
        }
        
        nav ul {
            display: flex;
            list-style: none;
            gap: 2rem;
        }
        
        nav a {
            color: var(--light);
            text-decoration: none;
            font-weight: 500;
            transition: color 0.3s;
        }
        
        nav a:hover {
            color: var(--accent);
        }
        
        .hero {
            text-align: center;
            padding: 4rem 2rem;
            background: linear-gradient(rgba(0,0,0,0.7), rgba(0,0,0,0.7)), url('https://images.unsplash.com/photo-1590771129823-8b8e1c438b9d?ixlib=rb-4.0.3') center/cover;
        }
        
        .hero h1 {
            font-size: 3.5rem;
            margin-bottom: 1rem;
            background: linear-gradient(to right, var(--primary), var(--secondary));
            -webkit-background-clip: text;
            background-clip: text;
            color: transparent;
        }
        
        .hero p {
            font-size: 1.2rem;
            max-width: 800px;
            margin: 0 auto 2rem;
            color: #ddd;
        }
        
        .countdown {
            display: flex;
            justify-content: center;
            gap: 1rem;
            margin: 2rem 0;
        }
        
        .countdown-item {
            background: rgba(255, 255, 255, 0.1);
            padding: 1rem;
            border-radius: 10px;
            min-width: 80px;
        }
        
        .countdown-number {
            font-size: 2rem;
            font-weight: 700;
        }
        
        .countdown-label {
            font-size: 0.9rem;
            color: #bbb;
        }
        
        .categories {
            padding: 4rem 2rem;
            max-width: 1200px;
            margin: 0 auto;
        }
        
        .section-title {
            text-align: center;
            font-size: 2.5rem;
            margin-bottom: 3rem;
            position: relative;
        }
        
        .section-title:after {
            content: '';
            position: absolute;
            bottom: -10px;
            left: 50%;
            transform: translateX(-50%);
            width: 100px;
            height: 4px;
            background: linear-gradient(to right, var(--primary), var(--secondary));
            border-radius: 2px;
        }
        
        .category-grid {
            display: grid;
            grid-template-columns: repeat(auto-fill, minmax(300px, 1fr));
            gap: 2rem;
        }
        
        .category-card {
            background: rgba(255, 255, 255, 0.05);
            border-radius: 15px;
            overflow: hidden;
            transition: transform 0.3s, box-shadow 0.3s;
            cursor: pointer;
        }
        
        .category-card:hover {
            transform: translateY(-10px);
            box-shadow: 0 15px 30px rgba(0, 0, 0, 0.4);
        }
        
        .category-image {
            height: 200px;
            background: linear-gradient(to right, var(--primary), var(--secondary));
            display: flex;
            align-items: center;
            justify-content: center;
            font-size: 4rem;
        }
        
        .category-content {
            padding: 1.5rem;
        }
        
        .category-content h3 {
            margin-bottom: 0.5rem;
            font-size: 1.5rem;
        }
        
        .category-content p {
            color: #bbb;
            margin-bottom: 1rem;
        }
        
        .nominees {
            padding: 4rem 2rem;
            background: rgba(0, 0, 0, 0.3);
        }
        
        .nominee-grid {
            display: grid;
            grid-template-columns: repeat(auto-fill, minmax(250px, 1fr));
            gap: 2rem;
            max-width: 1200px;
            margin: 0 auto;
        }
        
        .nominee-card {
            background: rgba(255, 255, 255, 0.05);
            border-radius: 15px;
            overflow: hidden;
            text-align: center;
            transition: transform 0.3s;
        }
        
        .nominee-card:hover {
            transform: scale(1.05);
        }
        
        .nominee-image {
            height: 250px;
            background-color: #333;
            background-position: center;
            background-size: cover;
        }
        
        .nominee-content {
            padding: 1.5rem;
        }
        
        .nominee-content h3 {
            margin-bottom: 0.5rem;
            font-size: 1.3rem;
        }
        
        .nominee-content p {
            color: #bbb;
            margin-bottom: 1rem;
        }
        
        .vote-btn {
            background: linear-gradient(to right, var(--primary), var(--secondary));
            color: white;
            border: none;
            padding: 0.8rem 1.5rem;
            border-radius: 50px;
            font-weight: 600;
            cursor: pointer;
            transition: all 0.3s;
            display: inline-flex;
            align-items: center;
            gap: 0.5rem;
        }
        
        .vote-btn:hover {
            transform: translateY(-3px);
            box-shadow: 0 5px 15px rgba(0, 0, 0, 0.3);
        }
        
        .payment-section {
            padding: 4rem 2rem;
            text-align: center;
            max-width: 800px;
            margin: 0 auto;
        }
        
        .payment-card {
            background: rgba(255, 255, 255, 0.05);
            border-radius: 15px;
            padding: 2rem;
            margin-top: 2rem;
        }
        
        .wave-info {
            display: flex;
            align-items: center;
            justify-content: center;
            gap: 1rem;
            margin: 2rem 0;
            padding: 1.5rem;
            background: rgba(255, 255, 255, 0.1);
            border-radius: 10px;
        }
        
        .wave-icon {
            font-size: 3rem;
            color: #28a745;
        }
        
        .wave-number {
            font-size: 1.5rem;
            font-weight: 700;
            letter-spacing: 2px;
            background: linear-gradient(to right, var(--success), #7cff7c);
            -webkit-background-clip: text;
            background-clip: text;
            color: transparent;
        }
        
        .steps {
            display: flex;
            justify-content: space-around;
            margin: 2rem 0;
            flex-wrap: wrap;
            gap: 1rem;
        }
        
        .step {
            background: rgba(255, 255, 255, 0.1);
            padding: 1.5rem;
            border-radius: 10px;
            width: 200px;
            text-align: center;
        }
        
        .step-number {
            background: linear-gradient(to right, var(--primary), var(--secondary));
            width: 40px;
            height: 40px;
            border-radius: 50%;
            display: flex;
            align-items: center;
            justify-content: center;
            margin: 0 auto 1rem;
            font-weight: 700;
        }
        
        footer {
            background: rgba(0, 0, 0, 0.9);
            padding: 3rem 2rem;
            text-align: center;
            margin-top: 4rem;
        }
        
        .footer-content {
            max-width: 1200px;
            margin: 0 auto;
            display: flex;
            flex-direction: column;
            gap: 2rem;
        }
        
        .social-icons {
            display: flex;
            justify-content: center;
            gap: 1.5rem;
        }
        
        .social-icons a {
            color: var(--light);
            font-size: 1.5rem;
            transition: color 0.3s;
        }
        
        .social-icons a:hover {
            color: var(--accent);
        }
        
        .modal {
            display: none;
            position: fixed;
            top: 0;
            left: 0;
            width: 100%;
            height: 100%;
            background: rgba(0, 0, 0, 0.8);
            z-index: 1000;
            align-items: center;
            justify-content: center;
        }
        
        .modal-content {
            background: linear-gradient(135deg, #1a1a2e, #16213e);
            padding: 2rem;
            border-radius: 15px;
            max-width: 500px;
            width: 100%;
            text-align: center;
            position: relative;
        }
        
        .close-modal {
            position: absolute;
            top: 1rem;
            right: 1rem;
            font-size: 1.5rem;
            cursor: pointer;
            color: #bbb;
        }
        
        @media (max-width: 768px) {
            header {
                flex-direction: column;
                gap: 1rem;
            }
            
            nav ul {
                gap: 1rem;
                flex-wrap: wrap;
                justify-content: center;
            }
            
            .hero h1 {
                font-size: 2.5rem;
            }
            
            .category-grid, .nominee-grid {
                grid-template-columns: 1fr;
            }
            
            .steps {
                flex-direction: column;
                align-items: center;
            }
        }
    </style>
</head>
<body>
    <header>
        <div class="logo">TOURNOI <span>LA LÉGENDE</span> <sup>3</sup></div>
        <nav>
            <ul>
                <li><a href="#">Accueil</a></li>
                <li><a href="#">Catégories</a></li>
                <li><a href="#">Nominés</a></li>
                <li><a href="#">Comment voter</a></li>
                <li><a href="#">Résultats</a></li>
            </ul>
        </nav>
    </header>
    
    <section class="hero">
        <h1>TOURNOI LA LÉGENDE 3</h1>
        <p>Découvrez et votez pour vos créateurs de contenu préférés dans la compétition ultime de l'année. Votre vote déterminera qui deviendra la prochaine légende!</p>
        
        <div class="countdown">
            <div class="countdown-item">
                <div class="countdown-number" id="days">00</div>
                <div class="countdown-label">Jours</div>
            </div>
            <div class="countdown-item">
                <div class="countdown-number" id="hours">00</div>
                <div class="countdown-label">Heures</div>
            </div>
            <div class="countdown-item">
                <div class="countdown-number" id="minutes">00</div>
                <div class="countdown-label">Minutes</div>
            </div>
            <div class="countdown-item">
                <div class="countdown-number" id="seconds">00</div>
                <div class="countdown-label">Secondes</div>
            </div>
        </div>
    </section>
    
    <section class="categories">
        <h2 class="section-title">Catégories de Vote</h2>
        
        <div class="category-grid">
            <div class="category-card">
                <div class="category-image">
                    <i class="fas fa-trophy"></i>
                </div>
                <div class="category-content">
                    <h3>Meilleur Joueur</h3>
                    <p>Récompense le joueur le plus talentueux de l'année</p>
                    <button class="vote-btn" onclick="openModal()">Voter <i class="fas fa-vote-yea"></i></button>
                </div>
            </div>
            
            <div class="category-card">
                <div class="category-image">
                    <i class="fas fa-graduation-cap"></i>
                </div>
                <div class="category-content">
                    <h3>Meilleure École</h3>
                    <p>L'établissement scolaire le plus méritant</p>
                    <button class="vote-btn" onclick="openModal()">Voter <i class="fas fa-vote-yea"></i></button>
                </div>
            </div>
        </div>
    </section>
    
    <section class="nominees">
        <h2 class="section-title">Nos Nominés</h2>
        
        <div class="nominee-grid">
            <div class="nominee-card">
                <div class="nominee-image" style="background-image: url('')"></div>
                <div class="nominee-content">
                    <h3>Thomas Dubois</h3>
                    <p>Joueur exceptionnel</p>
                    <button class="vote-btn" onclick="openModal()">Voter <i class="fas fa-vote-yea"></i></button>
                </div>
            </div>
            
            <div class="nominee-card">
                <div class="nominee-image" style="background-image: url('')"></div>
                <div class="nominee-content">
                    <h3>Lycée Excellence</h3>
                    <p>École performante</p>
                    <button class="vote-btn" onclick="openModal()">Voter <i class="fas fa-vote-yea"></i></button>
                </div>
            </div>
            
            <div class="nominee-card">
                <div class="nominee-image" style="background-image: url('')"></div>
                <div class="nominee-content">
                    <h3>Sophie Martin</h3>
                    <p>Joueuse talentueuse</p>
                    <button class="vote-btn" onclick="openModal()">Voter <i class="fas fa-vote-yea"></i></button>
                </div>
            </div>
            
            <div class="nominee-card">
                <div class="nominee-image" style="background-image: url('')"></div>
                <div class="nominee-content">
                    <h3>Collège Innovation</h3>
                    <p>École avant-gardiste</p>
                    <button class="vote-btn" onclick="openModal()">Voter <i class="fas fa-vote-yea"></i></button>
                </div>
            </div>
        </div>
    </section>
    
    <section class="payment-section">
        <h2 class="section-title">Comment Voter</h2>
        <p>Chaque vote coûte 200 FCFA et se fait via Wave. Suivez les étapes ci-dessous:</p>
        
        <div class="wave-info">
            <i class="fas fa-money-bill-wave wave-icon"></i>
            <div>
                <p>Envoyez votre vote par Wave au numéro:</p>
                <div class="wave-number">0709467472</div>
                <p>Indiquez le nom du candidat en message</p>
            </div>
        </div>
        
        <div class="steps">
            <div class="step">
                <div class="step-number">1</div>
                <h3>Sélectionnez votre candidat</h3>
                <p>Choisissez le créateur que vous souhaitez soutenir</p>
            </div>
            
            <div class="step">
                <div class="step-number">2</div>
                <h3>Envoyez par Wave</h3>
                <p>Faites un paiement de 200 FCFA au 0709467472</p>
            </div>
            
            <div class="step">
                <div class="step-number">3</div>
                <h3>Confirmation</h3>
                <p>Vous recevrez un message de confirmation</p>
            </div>
        </div>
        
        <div class="payment-card">
            <h3>Votez autant de fois que vous le souhaitez!</h3>
            <p>Chaque vote compte pour votre créateur préféré. Plus vous votez, plus vous augmentez leurs chances de gagner le trophée.</p>
            <button class="vote-btn" onclick="openModal()">Voter Maintenant <i class="fas fa-arrow-right"></i></button>
        </div>
    </section>
    
    <footer>
        <div class="footer-content">
            <div class="logo">TOURNOI <span>LA LÉGENDE</span> <sup>3</sup></div>
            
            <p>La compétition ultime des créateurs de contenu. Votez pour votre légende préférée!</p>
            
            <div class="social-icons">
                <a href="#"><i class="fab fa-tiktok"></i></a>
                <a href="#"><i class="fab fa-instagram"></i></a>
                <a href="#"><i class="fab fa-twitter"></i></a>
                <a href="#"><i class="fab fa-facebook"></i></a>
            </div>
            
            <p>© 2023 TOURNOI LA LÉGENDE 3. Tous droits réservés.</p>
        </div>
    </footer>
    
    <div class="modal" id="voteModal">
        <div class="modal-content">
            <span class="close-modal" onclick="closeModal()">&times;</span>
            <h2>Procéder au vote</h2>
            <p>Pour voter, envoyez 200 FCFA via Wave au numéro:</p>
            <div class="wave-number" style="font-size: 2rem; margin: 1rem 0;">0709467472</div>
            <p>Indiquez le nom du candidat dans le message.</p>
            <p>Vous recevrez une confirmation par SMS.</p>
            <button class="vote-btn" style="margin-top: 1.5rem;" onclick="closeModal()">J'ai compris</button>
        </div>
    </div>

    <script>
        // Countdown timer
        function updateCountdown() {
            const targetDate = new Date('2023-12-31T23:59:59').getTime();
            const now = new Date().getTime();
            const distance = targetDate - now;
            
            if (distance > 0) {
                document.getElementById('days').innerText = Math.floor(distance / (1000 * 60 * 60 * 24)).toString().padStart(2, '0');
                document.getElementById('hours').innerText = Math.floor((distance % (1000 * 60 * 60 * 24)) / (1000 * 60 * 60)).toString().padStart(2, '0');
                document.getElementById('minutes').innerText = Math.floor((distance % (1000 * 60 * 60)) / (1000 * 60)).toString().padStart(2, '0');
                document.getElementById('seconds').innerText = Math.floor((distance % (1000 * 60)) / 1000).toString().padStart(2, '0');
            }
        }
        
        setInterval(updateCountdown, 1000);
        updateCountdown();
        
        // Modal functions
        function openModal() {
            document.getElementById('voteModal').style.display = 'flex';
        }
        
        function closeModal() {
            document.getElementById('voteModal').style.display = 'none';
        }
        
        // Close modal if clicked outside
        window.onclick = function(event) {
            const modal = document.getElementById('voteModal');
            if (event.target === modal) {
                closeModal();
            }
        };
    </script>
</body>
</html>
