// this progralm will checks whether two arrays have the same elements in the same order. using map

#include <iostream>
using namespace std;

bool equals(int a[], int a_size, int b[], int b_size){
    if (a_size != b_size){
        return false;
    }
    for (int i = 0; i < a_size; i++){
        if (a[i] != b[i]){
            return false;
        }
    }
    return true;

}
int main(){
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {1, 2, 3, 4, 5};
    int c[] = {1, 2, 3, 4, 6};
    int d[] = {1, 2, 3, 4, 5, 6};
    cout << equals(a, 5, b, 5) << endl;
    cout << equals(a, 5, c, 5) << endl;
    cout << equals(a, 5, d, 6) << endl;
    return 0;
}