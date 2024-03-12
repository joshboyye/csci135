// This program will sort two numbers in ascending order
#include <iostream>
using namespace std;

void sort2(double* p, double* q){
    if(p>q){
        double temp = *p;
        *p = *q;
        *q = temp;
    }

}

int main(){
    double a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    sort2(&a, &b);
    cout << "The numbers in ascending order are: " << a << " " << b << endl;
    return 0;
}