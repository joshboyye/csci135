#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<string> foods ={"grades","pizza","rice"};
    foods.push_back("라면");
    for(auto c : foods){
        cout << c <<endl;
    }

    return 0;
}