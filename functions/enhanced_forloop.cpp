#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    
    std::vector<int> v;
    v.push_back(8);
    for (auto i : v){
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}