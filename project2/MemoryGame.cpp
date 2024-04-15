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
    randomize();
    while (true) {
        display();
        int first, second;
        cout << "Enter two distinct indices: ";
        cin >> first >> second;
        if (first == second || first < 0 || first >= numSlots || second < 0 || second >= numSlots) {
            cout << "Invalid indices. Please try again.\n";
            continue;
        }
        if (values[first] == values[second]) {
            cout << "Match found!\n";
            return;
        } else {
            cout << "No match. Please try again.\n";
        }
    }
}

// Display method
void MemoryGame::display() const {
    for (int i = 0; i < numSlots; ++i) {
        cout << i << ": " << values[i] << '\n';
    }
}

// Randomize method
void MemoryGame::randomize() {
    int size = numSlots;
    while (size > 1) {
        int index = rand() % size;
        string temp = values[index];
        values[index] = values[size - 1];
        values[size - 1] = temp;
        --size;
    }
}