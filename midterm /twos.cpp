#include <iostream>
using namespace std;

int twos(int a){
    int count = 0;
    string str = to_string(a);
    for(auto& c: str){
        if(c == '2'){
            count++;
        }
    }
    return count;
}
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<twos(a)<<endl;
    return 0;
}