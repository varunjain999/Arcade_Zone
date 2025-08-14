# Arcade_Zone
Arcade Zone – C++ Game Hub
This program is a console-based game hub offering multiple mini-games under one menu system. It provides a fun, text-based interface where the user can choose from four different games, each implemented as a separate function but integrated into a single application.

Games included:

Rock-Paper-Scissors (RPS)

Player chooses rock, paper, or scissors.

Computer randomly selects its move.

The winner is decided based on the classic rules.

Lottery Game

User chooses a number between 1 and 100.

The program randomly generates a number.

If the chosen number matches, the user wins; otherwise, they lose.

Math-o-Meter

Generates a random arithmetic question involving addition, subtraction, or multiplication.

User must input the correct answer.

Feedback is given whether the answer is correct or wrong.

Snake & Ladder

A simple dice-rolling game simulating snakes and ladders.

Rolling the dice moves the player forward.

Ladders move the player up; snakes move the player down.

The game ends when the player reaches position 100.

Program Flow:

On startup, the user is greeted and presented with a main menu.

Each menu choice takes the player to a selected game.

After finishing a game, the player can return to the main menu or exit.

Uses random number generation for game unpredictability and Windows-specific functions (system("cls"), Sleep) for better console control.

Technical Highlights:

Uses <cstdlib>, <ctime> for randomness.

Uses goto for menu navigation (though not best practice).

Includes color changes in output for a more engaging look (via system("color")).

Encapsulates snake-and-ladder logic in a body class with methods for dice rolls and special positions.
