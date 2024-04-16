#include "MemoryGame.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

MemoryGame::MemoryGame() : MemoryGame(3,8) {}

MemoryGame::MemoryGame(int numPairs, int numSlots) {
    if(numPairs <= 0 || numSlots <= 0 || numSlots < numPairs * 2){
        numPairs = 3;
        numSlots = 8;
    }
    this->numPairs = numPairs;
    this->numSlots = numSlots;
    values = new string[numSlots]; 
    int curr;
    for(int i = 0; i < numPairs*2;i +=2){
        curr = rand() % 1000;
        values[i] = to_string(curr);
        values[i+1] = to_string(curr);
    }
    for(int i = numPairs*2; i <numSlots; i++){
        values[i] = "";
    } 
    bShown = new bool[numSlots];
    for(int i = 0; i < numSlots; i++){
        bShown[i] = false; 
    }
}

MemoryGame::MemoryGame(string* words, int size, int numSlots) : MemoryGame(size, numSlots) {
    if(size <= 0 || numSlots <= 0 || numSlots < size*2) {
    numSlots = size*2; 
    }
    this-> numPairs = size;
    this-> numSlots = numSlots;
    values  = new string[numSlots];
    for(int i = 0; i < numPairs; i++){
        values[2*i] = words[i];
        values[2*i+1] = words[i];
    }
    for(int i = numPairs*2; i <numSlots; i++){
        values[i] = "";
    }
    bShown = new bool[numSlots];
    for(int i = 0; i < numSlots; i++){ 
        bShown[i] = false; 
    }
}

MemoryGame::~MemoryGame() {
    delete[] values; 
    values = nullptr;
    delete[] bShown;
    bShown = nullptr;
}

void MemoryGame::randomize() {
    int size = numSlots;
    while (size > 1){
        int curr = rand() % size;
        swap(values[curr],values[size-1]);
        size --;
    }
}

void printSeparatedLine(int size) {
    cout << "+";
    for (int i = 0; i < size; i++)
        cout << "-----+";
    cout << endl;
}

void MemoryGame::display() const {
    cout << " ";
    for (int i = 0; i < numSlots; i++){
        cout << setw(3) << i << setw(3) << " ";
    }
    cout << endl;
    printSeparatedLine(numSlots);
    cout << "|";
    for(int i = 0; i < numSlots; i++){
        if (bShown[i]){
            cout << setw(5) << values[i] << "|";
        }
        else{
            cout << setw(5) << " " << "|";
        } 
    }
    cout << endl;
    printSeparatedLine(numSlots);
}
int MemoryGame::input() const{
    int input;
   
    cout << "Enter a unflipped card in [0 " << numSlots-1 << "]: ";
    cin >> input;
        
        while(input < 0 || input > numSlots-1 || bShown[input]){ 
             
            if(input < 0 || input >= numSlots-1 ) 
            {
                cout << "input is not in [0, " << numSlots-1 << "]. Re-enter: ";
                cin >> input; 
                cout << endl;
            }
            else { 
                cout << "The card has is flipped already. Re-enter: ";
                cin >> input;
                cout << endl;
            }
        }
    cout << endl;
    return input;
}

void MemoryGame::play(){
    display();
    randomize();

    int foundPairs = 0;
    int roundNums = 0;
    int firstIndex = -1;

    while(foundPairs < numPairs){ 
        roundNums +=1;
        cout << "Round   " << roundNums << ":" << endl;

        int index = input(); 
        bShown[index] = true; 

        if (firstIndex == -1) {
            firstIndex = index; 
        } else {
            if (values[firstIndex] == values[index]) {
                foundPairs++; 
            } else {
                cout << "Not a match. Try again." << endl;
                bShown[firstIndex] = bShown[index] = false; 
            }
            firstIndex = -1; 
        }
        display(); 
    }
    cout << "Congratulations! Found all pairs in " << roundNums << " rounds." << endl;
}