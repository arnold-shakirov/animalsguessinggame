# Animal Guessing Game

This is a simple C++ console-based Animal Guessing Game. The program uses a binary tree structure to store questions and animals, allowing it to expand its knowledge and improve its guessing accuracy over time based on user input.

## Features

- **Question-based Learning**: The program starts with a user-provided question and two animals. It learns new animals and corresponding questions as it plays with the user.
- **Binary Tree Data Structure**: Questions are stored in nodes with left and right child pointers, representing yes/no answers.
- **Interactive Gameplay**: The game continues to ask the user to think of an animal and attempts to guess it based on prior knowledge.

## How It Works

1. The game begins with a question and two animals (one true, one false).
2. The program asks a yes/no question and tries to guess the animal based on previous knowledge.
3. If the guess is correct, the program wins.
4. If the guess is wrong, the user teaches the program a new animal and provides a distinguishing question.
5. The program then updates its binary tree, expanding its knowledge.

## File Descriptions

### `main.cpp`

- The main entry point of the program.
- Prompts the user for an initial question and two animals.
- Traverses the binary tree to ask yes/no questions until it makes a guess.
- If the guess is incorrect, the program learns from the user and adds the new animal and question to the tree.

### `tree.cpp`

- Implements the `tree` class, managing the binary tree structure.
- Handles operations like:
  - Adding left and right child nodes.
  - Checking if a node has children.
  - Retrieving and setting node data.
  - Calculating the size and depth of the tree.

### `tree.h`

- Header file for the `tree` class.
- Declares functions to:
  - Create tree nodes with a question or animal.
  - Set and get left and right child nodes.
  - Retrieve and set data stored in a node.
  - Check if the node contains a question or an animal.
  - Calculate the size and depth of the tree.

## Getting Started

### Prerequisites

- C++ compiler (g++, clang++, etc.)

### Compilation

To compile the program, use the following command:

```bash
g++ -o animal_guessing_game main.cpp tree.cpp -I.
```
## Running program
./my_program

## Example Run
create a question for this animal so the answer for would be true for this animal
question: Does it live in water?
what animal? Give me two animals the first one is true and second false
fish
dog
Now think of a new animal
My question is: Does it live in water?
type yes or no:
yes
Is it fish type yes or no: yes
I won

## If the program guesses incorrectly
Is it fish type yes or no: no
what kind of an animal is this?
cat
make a question so it would be yes for this animal and no for the animal fish
Does it have whiskers?
thanks for teaching me

