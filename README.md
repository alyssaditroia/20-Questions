# 20 Questions Game

## Overview

This project is a command-line game of **20 Questions** that tries to guess a fruit or vegetable you are thinking of by asking a series of yes/no questions. The game is implemented using a binary search tree (BST) to represent the decision tree for the questions.

## Features

- **Binary Search Tree Implementation:** The game uses a binary search tree where each node represents a question or a guess.
- **Interactive Gameplay:** Players can play multiple rounds, with the program attempting to guess the fruit or vegetable.
- **Learning Mechanism:** If the program guesses incorrectly, it prompts the user to provide the correct answer and a question that would help distinguish it, allowing the tree to "learn" from incorrect guesses.

## How to Play

1. **Start the Game:** Run the program, and you'll be greeted with a welcome message. Press any key to start the game.
2. **Think of a Fruit or Vegetable:** The program will ask a series of yes/no questions to try to guess your item.
3. **Answer Questions:** Answer the questions by typing 'y' for yes and 'n' for no.
4. **Game Outcome:**
   - If the program guesses correctly, it will congratulate you.
   - If the guess is incorrect, you'll be prompted to provide the correct item and a distinguishing question.
5. **Replay or Quit:** After each round, you can choose to play again or quit by entering 'q'.

## Code Structure

- **`main()`**: The main function initializes the game, loads the BST with pre-defined questions and guesses, and handles the game loop.
- **`makeTree()`**: This function creates and returns the initial BST, populated with a series of questions and guesses.
- **`playGame()`**: Handles the logic of traversing the tree based on the player's input and makes a guess.
- **Tree Visualization (Commented Out)**: A tree visualization function is included in the code but is currently commented out. This function would allow the tree structure to be printed in a human-readable format.

## Example Tree Structure

The game starts with a predefined tree structure, for example:

- Root Question: "Is it a fruit?"
- If yes: "Does it have a pit?"
  - If yes: "Is it fuzzy?"
    - If yes: "It's a peach!"
    - If no: "It's a plum!"
  - If no: "Is it red in color?"
    - If yes: "It's a cherry!"
    - If no: "It's a mango!"
- If no: "Is it a root vegetable?"
  - If yes: "Is it orange?"
    - If yes: "It's a carrot!"
    - If no: "It's a sweet potato!"
  - If no: "Is it leafy?"
    - If yes: "It's spinach!"
    - If no: "It's lettuce!"

## Future Improvements

- **Dynamic Learning:** Allow the game to store new questions and guesses between sessions.
- **Tree Visualization:** Uncomment and enhance the tree visualization code to help debug or view the structure of the decision tree.
- **Additional Questions:** Expand the initial tree with more questions and items to improve the game experience.

## How to Compile and Run

1. **Compile the code:**
   ```bash
   gcc -o twenty_questions twenty.c bst.c -I.
