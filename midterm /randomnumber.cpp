#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    while(true){
        int random = 10+(rand()%91);
        cout<<random<<endl;
        if(random == 100){
            break;
        
        }
    }

    // for(int i =0; i<20; i++){
    //     int random = 10+(rand()%100);

    //     cout<<random<<endl;
    // }
    
}