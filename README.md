# Mini Games Collection (C++ Console Application)

A simple command-line Mini Games Collection built in C++ using Visual Studio.  
This project demonstrates object-oriented programming such as inheritance, polymorphism, encapsulation, along with
shared game logic, and modular project design through two classic games: Tic Tac Toe and Rock Paper Scissors.

---

# Design Overview
This project was created to explore how gameplay mechanics can be represented through modular systems and shareable code structures. My goal was to create a simple collection of mini games that share common architecture while maintaining their own unique rules and interactions
   - Tic Tac Toe: Focused on creating strategic play, managing players turns and game flow
   - Rock Paper Scissors: Designed for quick, repeatable gameplay with focus on randomness, and player engagement
   - System Design: Shared base classes handle setup, input validation, and turn management, ensuring scalability for new        games in the future

---

# Design Goals 
- Explore and gain hands-on experience in gameplay development
- Practice building systems that separate game logic from presentation (UI)
- Create a flexible architecture where new games can be added easily
  
---

## How to Build and Run
### Windows (Visual Studio)
1. Clone the repository:
   ```bash
   git clone https://github.com/PVAT1187/MiniGames_Collection.git
2. Open MiniGamesCollection.sln in Visual Studio
3. Build and run

### Command Line (if using g++)
1. Ensure you have g++ with C++17 support:
2. Copy the code below:
  ```bash
  g++ -std=c++17 -o MiniGames main.cpp GameMenu.cpp TicTacToe.cpp RockPaperScissors.cpp GameInterface.cpp TicTacToeInterface.cpp RockPaperScissorsInterface.cpp
  ./MiniGames
  ```
---

## Usage
<img width="359" height="222" alt="Screenshot 2025-10-27 234044" src="https://github.com/user-attachments/assets/c366ded2-ef2f-4d1f-8fb1-5675f70f6fc9" />
<img width="357" height="263" alt="Screenshot 2025-10-27 234558" src="https://github.com/user-attachments/assets/6de89fdd-1d38-40a3-942f-5f3f69ea4725" />
<img width="352" height="585" alt="Screenshot 2025-10-27 234056" src="https://github.com/user-attachments/assets/2aff3347-f861-4243-bc4b-d7396db33c0d" />
<img width="358" height="490" alt="Screenshot 2025-10-27 234119" src="https://github.com/user-attachments/assets/29554559-46a6-4eab-9835-dc8c71701a5a" />

---

## Features
- Interactive console-based gameplay
- Clean and modular design using base and derived classes
- Separate interface classes for user input/output
- Extendable design — new games can easily be added

---

## Tech Stack
- Programming Language: C++
- Concepts:
  - Object-Oriented Programming
    - Inheritance and polymorphism
    - Virtual functions and overrides
  - Encapsulation of game logic and UI
  - Random number generation (for computer choices)
  - Modular project structure
- IDE/Tools: Visual Studio, Git, GitHub

---

## Future Improvements
- Add AI opponent for Tic Tac Toe
- Introduce score tracking and statistics

---

## Author
**Vu Anh Thu Phan** - [GitHub](https://github.com/PVAT1187) 

