#include <iostream>
#include <string>
using namespace std;

string digit(string a){
    string letters;
    for(char& c: a){
        if(isdigit(c)){
            letters+=c;
        }
    }
    return letters;
}
