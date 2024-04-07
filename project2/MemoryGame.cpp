#include "MemoryGame.hpp"
#include <cstdlib>
#include <ctime>

// Default constructor
MemoryGame::MemoryGame() : numPairs(3), numSlots(8) {
    values = new string[numSlots];
    string hardcodedValues[] = {"383", "886", "777"};
    for (int i = 0; i < numPairs; i++) {
        values[i * 2] = hardcodedValues[i];
        values[i * 2 + 1] = hardcodedValues[i];
    }
    for (int i = numPairs * 2; i < numSlots; ++i) {
        values[i] = "";
    }
    bShown = new bool[numSlots];
    for (int i = 0; i < numSlots; ++i) {
        bShown[i] = false;
    }
    randomize();
}

// Constructor with words, size, and number of slots as parameters
MemoryGame::MemoryGame(string *words, int size, int numSlots) : MemoryGame(size, numSlots) {
    for (int i = 0; i < size; ++i) {
        values[i * 2] = words[i];
        values[i * 2 + 1] = words[i];
    }
    for (int i = size * 2; i < numSlots; ++i) {
        values[i] = "";
    }
}

// Constructor with number of pairs and slots as parameters
MemoryGame::MemoryGame(int numPairs, int numSlots) : numPairs(numPairs), numSlots(numSlots) {
    values = new string[numSlots];
    string hardcodedValues[] = {"383", "886", "777"};
    for (int i = 0; i < numPairs; i++) {
        values[i * 2] = hardcodedValues[i];
        values[i * 2 + 1] = hardcodedValues[i];
    }
    for (int i = numPairs * 2; i < numSlots; ++i) {
        values[i] = "";
    }
    bShown = new bool[numSlots];
    for (int i = 0; i < numSlots; ++i) {
        bShown[i] = false;
    }
    randomize();
}

// Destructor
MemoryGame::~MemoryGame() {
    delete[] values;
    values = nullptr;
    delete[] bShown;
    bShown = nullptr;
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
        // Your code goes here
    }
}