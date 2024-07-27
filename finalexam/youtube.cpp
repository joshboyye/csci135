#include <iostream>
#include<list>
using namespace std;

class youtube{
public:
    string name;
    int subscrabers;
    list<string> PublishedVideos;

    youtube(string name, int subscrabers){
        this->name =name;
        this->subscrabers = subscrabers;
    }
    string getName(){
        return name;
    }
    void setName(string name){
        this->name = name;
    }
};
int main(){
    youtube daria("Daria",1000);
    daria.setName("Daria is good");
    // youtube daria;
    // daria.name = "Daria";
    // daria.subscrabers = 12000;
    //daria.PublishedVideos = {"bts", "j hope"};


    cout << daria.getName() << endl;
    cout << daria.name;
    return 0;


}