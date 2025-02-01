# Rock Paper Scissors Game

## Description

This is a simple Rock-Paper-Scissors game implemented in C++. The user plays against the computer, which makes a random choice.

## How to Play

1. Run the program.
2. Enter your choice:
   - `0` for Rock
   - `1` for Paper
   - `2` for Scissors
3. The computer will make a random choice.
4. The winner will be determined based on the standard rules of the game:
   - Rock beats Scissors
   - Paper beats Rock
   - Scissors beats Paper
5. The result will be displayed on the screen.

## Compilation and Execution

To compile the program using g++, run:

```
g++ -o rps game.cpp
```

Then execute it with:

```
./rps
```

## Requirements

- C++ compiler (g++, clang, or MSVC)
- Standard C++ library

## Notes

- If an invalid choice is entered, the program will terminate with an error message.
- The computer's choice is randomly generated using `rand()` seeded with the current time.

Enjoy playing!

