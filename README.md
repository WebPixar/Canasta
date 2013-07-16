Canasta
=======

To keep up with my skills and since I can't find anyone to play with me, I'm creating a program to play the card game, Canasta, all from scratch! This is one of my goals for the summer. I will be using C++ and OpenGL 2.0. I'm also thinking of learning Python to use for the AI.  
-- [Patrick Vargas](mailto:patrick.vargas@colorado.edu?subject=Canasta on GitHub&body=It's Amazing!!!)

Makefile Commands
-----------------  

    $ make
Create the main executable and testsuite executable.  

    $ canasta  
Runs the main program.  

    $ testsuit
Runs the test program, which verifies the classes work.  

    $ make clean
Rebuild everything  

File Structure
--------------

### Bicycle Archive
The `bicycle.h` archive library contains:
* `card.cpp`
    * The basic card class; Suite, Rank, Value and if it's Face Up
* `deck.cpp`
    * A deck of either 52 or 54 cards.
* `player.cpp`
    * A player class to hold cards and play in the game

### The Test Suit
The main file for the test suit, `testsuit.cpp`, calls the following files:
* `testcard.cpp`
    * Tests the card class.
* `testdeck.cpp`
    * Tests the deck class.
* `testplayer.cpp` 
    * Tests the player class.
