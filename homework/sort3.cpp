//this program will sort three numbers
#include <iostream>
using namespace std;    

void sort3(int& a, int& b, int& c){
    if(a>b){
        int d=a ;
        a=b;
        b=d;
    }
    if(a>c){
        int d=a;
        a=c;
        c=d;
    }
    if(b>c){
        int d=b;
        b=c;
        c=d;
    }
}
int main(){
    int v = 3;
    int w = 4;
    int x = 1;
    sort3(v, w, x); // v is now 1, w is now 3, x is now 4
    return 0;
}