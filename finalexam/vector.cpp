#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
     vector<string> foods ={"ramon","udon"};
    foods.push_back("chiken");
    foods.pop_back();

    // for(auto c : foods){
    //     cout << c << endl;
    // }
    vector<int> daria = {25};
    daria.push_back(25);
    
    for(auto d : daria){
        cout << d <<endl;
    }
    return 0;
}

