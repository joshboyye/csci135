#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;   

int main(){
    srand(time(0));
    int count1 =0; // count of numbers >= 70
    int count2 =0; // count of numbers in [60, 70)
    int count3 =0; // count of numbers < 60

    for(int i=0; i<20; i++){
        int random =10+(rand()%91);

        if(random>=70){
            count1++;
        }
        else if(random >=60){
            count2++;
        }
        else if(random<60){
            count3++;
        }
    }
    cout << "The number of random numbers greater than or equal to 70 is: " << count1 << endl;
    cout << "The number of random numbers less than 70 and greater than or equal to 60 is: " << count2 << endl;
    cout << "The number of random numbers less than 60 is: " << count3 << endl;

    return 0;
}