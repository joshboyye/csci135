//Given function bool isPrime(int n), which return true if n is a prime integer, false otherwise. Write code to find out how many prime integers are in [1, 100].
#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i =5; i<n; i++){
        if(i%2==0){
            return false;
        }
    }
    return true;
}

int main(){
    

    return 0;
}