// This program will create a class called Profile that has a username and displayname. It will have methods to get the username, get the full name, and set the display name.
#include <iostream>
#include <string>
#include <cstdlib>

#include "Hare.hpp"

using namespace std;

Hare::Hare() {
    int arr[] = {0, 0, 9, 9, -12, 1, 1, 1, -2, -2};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        patterns.push_back(arr[i]);
    }
    position = 0;
}

Hare::Hare(std::vector<int> patterns, int position) {
    this -> patterns = patterns;
    this -> position = position;
}

Hare::Hare(int* arr, int size, int position) {
    for (int i = 0; i < size; i++) {
        patterns.push_back(arr[i]); 
    }
    this -> position = position;
}

void Hare::move() {
    int index = rand() % patterns.size();
    int stepsToMove = patterns[index];
    position += stepsToMove; 
}

int Hare::getPosition() const {
    return position; 
}

void Hare::setPosition(int position) {
    this -> position = position;
}