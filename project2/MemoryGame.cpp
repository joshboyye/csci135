#include "MemoryGame.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

// Default constructor
MemoryGame::MemoryGame() : numPairs(3), numSlots(8) {
    // Allocate dynamic memory for an array of strings with numSlots elements
    values = new string[numSlots];
    // Generate three random integers in [0, 999]
    srand(time(0));
    for (int i = 0; i < numPairs * 2; i += 2) {
        string val = to_string(rand() % 1000);
        // Place the integer to the two slots of values
        values[i] = val;
        values[i + 1] = val;
    }
    // Set the rest elements of values to be empty strings
    for (int i = numPairs * 2; i < numSlots; ++i) {
        values[i] = "";
    }
    // Allocate dynamic memory for an array of booleans with numSlots elements
    bShown = new bool[numSlots];
    // Set each element of bShown to be false
    for (int i = 0; i < numSlots; ++i) {
        bShown[i] = false;
    }
    randomize();
}

// Constructor with words, size, and number of slots as parameters
MemoryGame::MemoryGame(string *words, int size, int numSlots) : MemoryGame(size / 2, numSlots) {
    for (int i = 0; i < size; ++i) {
        values[i] = words[i];
    }
}

// Constructor with number of pairs and slots as parameters
MemoryGame::MemoryGame(int numPairs, int numSlots) : numPairs(numPairs), numSlots(numSlots) {
    // Your code goes here
}


// Destructor
MemoryGame::~MemoryGame() {
    delete[] values;
    delete[] bShown;
}

// Play method
void MemoryGame::play() {
    // Your code goes here
}

// Display method
void MemoryGame::display() const {
    // Your code goes here
}

// Randomize method
void MemoryGame::randomize() {
    srand(time(0));
    for (int i = numSlots - 1; i > 0; --i) {
        int j = rand() % (i + 1);
        swap(values[i], values[j]);
        swap(bShown[i], bShown[j]);
    }
}

// Input method
int MemoryGame::input() const {
    // Your code goes here
    return 0;
}