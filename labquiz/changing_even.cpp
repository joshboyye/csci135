#include <iostream>
using namespace std;

string change_even_to_odd(string a){
    string b;

}

int main(){

    string a;
    string b;
    cout << "Enter a name:";
    getline(cin,a);

    for(char c : a){
        if(c%2==1){
            cout << c;
        }
    }

    return 0;
}