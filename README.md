# Mini Games Collection (C++ Console)

A simple command-line Mini Games Collection featuring two classic games: Tic Tac Toe and Rock Paper Scissors.

---

## Design Overview
The project uses a shared architecture to support multiple games while keeping their rules and interactions separate
   - Tic Tac Toe: Turn management, player interaction, and strategic gameplay
   - Rock Paper Scissors: Rock Paper Scissors: Randomized outcomes and repeatable gameplay
   - System Design: Base classes handle common functionality, including game setup, input validation, and turn management

---

## Design Goals 
- Gain hands-on experience in gameplay development
- Practice object-oriented programming design
- Practice building systems that separate game logic from user I/O

---

## Features
- Interactive console-based gameplay
- Separate game logic and interface classes
- Reusable base classes and derived game implementations

---

## Tech Stack
- Programming Language: C++
- IDE: Visual Studio
- Concepts: Object-Oriented Programming
  
---

## How to Build and Run
### Windows (Visual Studio)
1. Clone the repository:
   ```bash
   git clone https://github.com/PVAT1187/MiniGames_Collection.git
2. Open MiniGamesCollection.sln in Visual Studio
3. Build and run

### Command Line (if using g++)
1. Ensure you have g++ with C++17 support, then run:
   ```bash
   g++ -std=c++17 -o MiniGames main.cpp GameMenu.cpp TicTacToe.cpp RockPaperScissors.cpp GameInterface.cpp TicTacToeInterface.cpp RockPaperScissorsInterface.cpp
   ./MiniGames
   ```

---

## Screenshots
<img width="359" height="222" alt="Screenshot 2025-10-27 234044" src="https://github.com/user-attachments/assets/c366ded2-ef2f-4d1f-8fb1-5675f70f6fc9" />
<img width="357" height="263" alt="Screenshot 2025-10-27 234558" src="https://github.com/user-attachments/assets/6de89fdd-1d38-40a3-942f-5f3f69ea4725" />
<img width="352" height="585" alt="Screenshot 2025-10-27 234056" src="https://github.com/user-attachments/assets/2aff3347-f861-4243-bc4b-d7396db33c0d" />
<img width="358" height="490" alt="Screenshot 2025-10-27 234119" src="https://github.com/user-attachments/assets/29554559-46a6-4eab-9835-dc8c71701a5a" />
