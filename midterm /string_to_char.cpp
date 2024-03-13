#include <iostream>
#include <string>
using namespace std;

bool checkString(const string& str) {
    for (char c : str) {
        if (c != 'a' && c != 'b' && c != 'c') {
            return false;
        }
    }
    return true;
}
bool checkString(const string& str) {
    for (char c : str) {
        if (c == 'a' || c == 'b' || c == 'c') {
            return true;
        }
    }
    return false;
}

int main() {
    string s; 
    cout << "Enter a string: ";
    getline(cin, s);
    cout << checkString(s) << endl;
    // for(int i=0; i<s.length(); i++){
    //     if(s[i] == 'a' || s[i] == 'b' || s[i] == 'c'){
    //         cout << "true"<< endl;
    //     }else{
    //         cout << "false"<< endl;
    //     }
    // }
   /* wrong because it will print true or false for each character in the string
   for (char c : s) {
        if(c == 'a' && c == 'b' && c == 'c'){
            cout << "true"<< endl;
        }else{
            cout << "false"<< endl;
        }
    } */   
    return 0;
}