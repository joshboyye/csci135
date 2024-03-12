#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> myVector;

    // Add elements to the vector
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);

    // Access elements using array notation
    cout << "Elements of the vector: ";
    for (int i = 0; i < myVector.size(); ++i) {
        cout << myVector[i] << " ";
    }
    cout << endl;

    // Access elements using iterator
    cout << "Elements of the vector using iterators: ";
    for (auto it = myVector.begin(); it != myVector.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
