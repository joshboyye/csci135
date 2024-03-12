#include <iostream>
using namespace std;

int main(){
    string a;
    cout<<"Enter a string\n";
    getline(cin,a);
    for (char c: a){
        cout<<c<< " "<< static_cast<double>(c) <<endl;
    }



    return 0;
}