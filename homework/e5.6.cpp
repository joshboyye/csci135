#include <iostream>
using namespace std;

string repeat(string str, int n){
    for(int i=0; i<n; i++){
        cout<<str;
    }
}


int main(){
    string str;
    int n;
    cout<<"Enter a string: ";
    cin>>str;
    cout<<"Enter a number: ";
    cin>>n;
    repeat(str,n);
    return 0;
}
