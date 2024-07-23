#include <iostream>
#include <string>
#include <list>

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
    Cars obj1("BMW",3);
    obj1.CarInvtory.push_back("M4");
    obj1.CarInvtory.push_back("i8");    
    obj1.getInfo();
    
    return 0;
}