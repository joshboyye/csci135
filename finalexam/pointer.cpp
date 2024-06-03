#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 20;
    const int* ptr = &x;
    // *ptr = 15; // error: read-only variable
    ptr = &y; // valid
    cout << "*ptr: " << *ptr << endl;
    
    int* const ptr2 = &x;
    *ptr2 = 30; // valid
    // ptr2 = &y; // error: assignment of read-only variable
    cout << "*ptr2: " << *ptr2 << endl;

    return 0;
}
