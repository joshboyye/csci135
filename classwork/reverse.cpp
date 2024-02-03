#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string a,b;

    cout<<"Enter a string\n";
    cin>>a;
    
    reverse(a.begin(),a.end());
    cout<<a<<endl;


    return 0;
}
