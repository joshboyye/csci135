#include <iostream>
#include <string>

using namespace std;

class MyCar{
    public:
        void myMethod(){ //This method is inside of classes 
            cout << "M4";
        }
        void carMethod();
};
void MyCar:: carMethod(){ //This method is outside of classes, if you want to make a method outside your classes you have 
    cout << "GLE"; 
}

int main(){
    MyCar bmw;
    bmw.myMethod();


    return 0;
}