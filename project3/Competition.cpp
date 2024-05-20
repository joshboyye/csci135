//This program is a simulation 

#include "Competition.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

Competition::Competition(){
    rabbit = Hare();
    tor = Tortoise();
    lane = Road();
}
Competition::Competition(Hare coney, Tortoise cooter, int length){
    rabbit = coney;
    tor = cooter;
    lane = Road(length);
}
void Competition::play(){
    int lastBlock = lane.length() - 1;
    int round = 1;
    while(rabbit.getPosition() < lastBlock && tor.getPosition() < lastBlock){
        rabbit.move();
        if(rabbit.getPosition() < 0){
            rabbit.setPosition(0);
        }
        else if(rabbit.getPosition() > lastBlock){
            rabbit.setPosition(lastBlock);
        }
        tor.move();
        if(tor.getPosition() < 0){
            tor.setPosition(0);
        }
        else if(tor.getPosition() > lastBlock){
            tor.setPosition(lastBlock);
        }
        lane.mark(rabbit.getPosition(), 'H');
        lane.mark(tor.getPosition(), 'T');
        cout << "Round " << round << ": ";
        lane.display();
        if(rabbit.getPosition() == tor.getPosition()){
            cout << "Ouch. Tortoise bites hare." << endl;
        }
        lane.mark(rabbit.getPosition(), ' ');
        lane.mark(tor.getPosition(), ' ');
        round++;
    }
    if(rabbit.getPosition() == tor.getPosition()){
        cout << "It is a tie." << endl;
    }
    else if (rabbit.getPosition() == lastBlock){
        cout << "Yuck. Hare wins." << endl;
    }
    else{
        cout << "Yay! Tortoise wins." << endl;
    }
}