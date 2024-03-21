#include <iostream>
using namespace std;

int main(){
    int n =4;
    int* p= &n;
    *p = 5;
    delete p;

    return 0;
}