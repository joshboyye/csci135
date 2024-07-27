#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    srand(time(0));

    while(true){
        int randomnum = rand() % 96 +5; // this is the formla for making the random number rand()%(maximum−minimum+1)+minimum 
        cout << randomnum << endl;
        if(randomnum == 100){
            break;
        }
    }
    
    // while(true){
    //     int random = 10+(rand()%91);
    //     cout<<random<<endl;
    //     if(random == 100){
    //         break;
        
    //     }
    // }

    // for(int i =0; i<20; i++){
    //     int random = 10+(rand()%100);

    //     cout<<random<<endl;
    // }
    
}