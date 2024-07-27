//Write code to print 1, 2, 4, 8, 16, ..., 1024 = 2^10, where the next item is twice of the previous one.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // for(int i=1; i<=1024; i*=2){
    //     cout << i << " " ;
    // }
    for(int i=1; i<=10; i++){
        cout << pow(2,i) << " ";
    }
    


    return 0;
}