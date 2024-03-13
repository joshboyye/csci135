#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string str ="hello world"; 
    string re = str.replace(0, 5, "goodbye");
    cout << re << endl;
}