/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab5

*/

#include <iostream>
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
    for (int i = 2; i < n; i++) {
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
int main() {
    int a, b;
    cout << "Enter the start of the range: ";
    cin >> a;
    cout << "Enter the end of the range: ";
    cin >> b;
    cout << "The number of prime numbers in the range is: " << countPrimes(a, b) << endl;
    return 0;
}
