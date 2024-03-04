#include <iostream>
#include <string>
using namespace std;

//enhance forloop for 2D array however, it is not recommended to use this for 2D array because c++ doesn't really suport enhance forloop for 2D array
//you have to use &auto to use it for 2D array
// but you can use it for 1D array such as 

int main(){
    //like this one 
    int arr1[] = {1, 2, 3, 4, 5};
    for(auto &i: arr1){
        cout << i << " ";
    }
    //this is not techincally legal but it works
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for(auto &i: arr){
        for(int j: i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}