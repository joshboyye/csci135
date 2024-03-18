#include <iostream>
using namespace std;

int even_or_odd(int arr[] , int size){
    for(int i=0; i<size; i++){
        if(arr[i]%2!=0){
            return false;
        }
    }
    return true;
}