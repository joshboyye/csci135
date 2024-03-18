#include <iostream>
using namespace std;

int range(int arr[], int size){
    int small = arr[0];
    int largest =arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]<small){
            small+=arr[i];
        }else if(arr[i]>largest){
            largest+=arr[i];
        }
    }
    return largest-small;
}