#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    int count = 0;
    cout<< "Enter a string:";
    getline(cin,str);
    for(char& c: str){
        if(c== 'a'){
            count++;
        }
    }
    cout << count <<endl;

    return 0;
}