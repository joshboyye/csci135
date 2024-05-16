// This program will create a class called Profile that has a username and displayname. It will have methods to get the username, get the full name, and set the display name.

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include "Road.hpp"

using namespace std;


Road::Road(){
    blocks.assign(70 , ' '); 
}
Road::Road(int l){
    if(l <= 0){ 
        l = 70; 
    }  
    blocks.assign(l , ' ');
}
void Road::mark(int i, char c){
    if(i >= 0 && i < blocks.size()){
        blocks[i] = c;
    }
}
void Road::display() const{
    for(int i = 0; i < blocks.size(); i++){
        char c = blocks[i];
        std::cout << c; 
    }
    cout << std::endl;
}
int Road::length() const{
    return blocks.size();

}

