#include <iostream>
#include <string>
#include <list>

using namespace std;

class Cars{
public: 
    string modelname;
    int modelnumber;
    list<string> CarInvtory;

    Cars(string name,int model){
        modelname=name;
        modelnumber=model;
    }
    void getInfo(){
        cout<< "name of the car is " << modelname << endl;
        cout << "ths is the model number " << modelnumber <<endl;
        for(auto i : CarInvtory){
            cout << i <<endl;
        }
    }
};

int main(){
    Cars obj1("BMW",3);
    obj1.CarInvtory.push_back("M4");
    obj1.CarInvtory.push_back("i8");    

    obj1.getInfo();

    return 0;
}
