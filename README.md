# TicTacToe Game

## Overview

This project is a console-based implementation of the classic TicTacToe game, designed for two players. The game is interactive and alternates between players, tracking moves, and determining the winner or if the game ends in a tie.

## Game Description

- **Number of Players**: 2
- **Player Symbols**:
  - Player 1: `*` (cross sign)
  - Player 2: `O` (O sign)
- **Gameplay**:
  - Players are prompted to enter their names at the start of the game.
  - Players take turns to make moves by selecting an available cell on a 3x3 grid.
  - The game board updates after each move and is displayed to both players.
  - The game continues until one player wins or the board is filled without a winner, resulting in a tie.
  - If a player wins, the game congratulates the winning player by name.

## Functions

### 1. `displayBoard()`

**Functionality**: Displays the current state of the game board.

**Description**: This function outputs the 3x3 TicTacToe board to the console, showing the positions marked by the players' symbols. The board is refreshed and printed after each move to reflect the current game state.

**Key Features**:
- Utilizes a 2D character array to store the board's state.
- Visually separates rows and columns for clarity.

### 2. `makeMove()`

**Functionality**: Handles player moves and updates the game board accordingly.

**Description**: This function collects input from the active player, marking the selected cell with their symbol (`*` or `O`). It checks for valid moves and alternates turns between players.

**Key Features**:
- Prompts the current player for a cell number to make a move.
- Converts the cell number to the appropriate row and column on the board.
- Ensures the selected cell is empty before placing the player's symbol.
- Validates the move to prevent overwriting existing marks.

### 3. `checkWin()`

**Functionality**: Determines if a player has won or if the game ends in a tie.

**Description**: This function evaluates the game board to identify winning conditions or a draw. It checks all possible win conditions (rows, columns, and diagonals) and verifies if there are any remaining empty cells to decide if the game can continue.

**Key Features**:
- Examines each row, column, and diagonal for three consecutive matching symbols.
- Checks for any remaining empty cells to determine if the game should continue.
- Updates the `tie` variable to `true` if all cells are filled without a winner.

## How to Run

1. **Compile the Code**:
   ```sh
   g++ -o TicTacToe TicTacToe.cpp
``
   **Execute the Game**:
   ./TicTacToe


## Gameplay Instructions

- Players are prompted to enter their names.
- The game alternates turns between Player 1 (`*`) and Player 2 (`O`).
- Players select a cell by entering a number corresponding to an empty cell on the board.
- The game board updates and displays the new state after each move.
- The game continues until there is a winner or a tie.

---
