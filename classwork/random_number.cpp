#include <cstdlib>
#include <iostream>

using namespace std;

int main(){

    int a = rand() %10;

    for (int i=0; i<5; i++){
        cout<< rand() %10<<endl;
    }
    return 0;
}