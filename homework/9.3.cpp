/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Homework E9.3 

This program will simulate a hallway light with two switches and a lamp. The lamp can be turned on or off by either switch.
*/
#include <iostream>
using namespace std;

class Circuit {
private:
    int first_switch = 0;  // 0 for down, 1 for up
    int second_switch = 0; // 0 for down, 1 for up
    int lamp_state = 0;    // 0 for off, 1 for on

public:
    Circuit() {
        first_switch = 0;
        second_switch = 0;
        lamp_state = 0;
    }

    int get_first_switch_state() {
        return first_switch;
    }

    int get_second_switch_state() {
        return second_switch;
    }

    int get_lamp_state() {
        return lamp_state;
    }

    void toggle_first_switch() {
        first_switch = !first_switch;
        toggle_lamp();
    }

    void toggle_second_switch() {
        second_switch = !second_switch;
        toggle_lamp();
    }

private:
    void toggle_lamp() {
        lamp_state = !lamp_state;
    }
};

int main() {
    Circuit * c1 = new Circuit;
    c1->toggle_first_switch();
    cout << "First switch state: " << c1->get_first_switch_state() << endl;
    cout << "Second switch state: " << c1->get_second_switch_state() << endl;
    cout << "Lamp state: " << c1->get_lamp_state() << endl;
    c1->toggle_second_switch();
    cout << "First switch state: " << c1->get_first_switch_state() << endl;
    cout << "Second switch state: " << c1->get_second_switch_state() << endl;
    cout << "Lamp state: " << c1->get_lamp_state() << endl;
    c1->toggle_first_switch();
    cout << "First switch state: " << c1->get_first_switch_state() << endl;
    cout << "Second switch state: " << c1->get_second_switch_state() << endl;
    cout << "Lamp state: " << c1->get_lamp_state() << endl;
    c1->toggle_second_switch();
    cout << "First switch state: " << c1->get_first_switch_state() << endl;
    cout << "Second switch state: " << c1->get_second_switch_state() << endl;
    cout << "Lamp state: " << c1->get_lamp_state() << endl;
    delete c1;
    return 0;
}