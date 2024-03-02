/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab5E

*/

#include <iostream>
#include <cmath>
using namespace std;

bool isDivisibleBy(int n, int d){
    if(d == 0){
        return false;
    }
    else if(n % d == 0){
        return true;
    }
    else{
        return false;
    }
}
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int nextPrime(int n) {
    int next = n + 1;
    while (!isPrime(next)) {
        next++;
    }
    return next;
}

int countPrimes(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            count++;
        }
    }
    return count;
}
bool isTwinPrime(int n) {
    if (isPrime(n) && (isPrime(n - 2) || isPrime(n + 2))) {
        return true;
    }
    return false;
}
int nextTwinPrime(int n) {
    int next = n + 1;
    while (!isTwinPrime(next)) {
        next++;
    }
    return next;
}
int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "The next twin prime number is: " << nextTwinPrime(a) << endl;
    return 0;
}


