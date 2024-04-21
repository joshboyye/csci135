/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab11 B

This program will create a class called Profile that has a username and displayname. It will have methods to get the username, get the full name, and set the display name. It will also create a class called Network that has a list of profiles and methods to add a user to the network.
*/

#include <iostream>
#include <string>
using namespace std;

class Profile {
private:
    string username;
    string displayname;
public:
    Profile(string usrn, string dspn) : username(usrn), displayname(dspn) {}
    Profile() : username(""), displayname("") {}
    string getUsername() { return username; }
    string getFullName() { return displayname + " (@" + username + ")"; }
    void setDisplayName(string dspn) { displayname = dspn; }
};

class Network {
private:
    static const int MAX_USERS = 20;
    int numUsers;
    Profile profiles[MAX_USERS];

    int findID(string usrn) {
        for(int i = 0; i < numUsers; i++) {
            if(profiles[i].getUsername() == usrn) {
                return i;
            }
        }
        return -1;
    }
public:
    Network() : numUsers(0) {}

    bool addUser(string usrn, string dspn) {
        if(numUsers == MAX_USERS || usrn.empty() || findID(usrn) != -1) {
            return false;
        }
        for(char c : usrn) {
            if(!isalnum(c)) {
                return false;
            }
        }
        profiles[numUsers++] = Profile(usrn, dspn);
        return true;
    }
};

int main() {
    Network nw;
    cout << nw.addUser("mario", "Mario") << endl;     // true (1)
    cout << nw.addUser("luigi", "Luigi") << endl;     // true (1)

    cout << nw.addUser("mario", "Mario2") << endl;    // false (0)
    cout << nw.addUser("mario 2", "Mario2") << endl;  // false (0)
    cout << nw.addUser("mario-2", "Mario2") << endl;  // false (0)

    for(int i = 2; i < 20; i++)
        cout << nw.addUser("mario" + to_string(i), 
                   "Mario" + to_string(i)) << endl;   // true (1)

    cout << nw.addUser("yoshi", "Yoshi") << endl;     // false (0)
}