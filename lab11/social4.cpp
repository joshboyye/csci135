/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab11 D

This program will create a class called Profile that has a username and displayname. It will have methods to get the username, get the full name, and set the display name. It will also create a class called Network that has a list of profiles and methods to add a user to the network.
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Post{
    string username;
    string message;
    int timestamp;
};

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
    bool following[MAX_USERS][MAX_USERS];
    static const int MAX_POSTS = 100;
    int numPosts;
    Post posts[MAX_POSTS];

    int findID(string usrn) {
        for(int i = 0; i < numUsers; i++) {
            if(profiles[i].getUsername() == usrn) {
                return i;
            }
        }
        return -1;
    }
public:
    Network() : numUsers(0), numPosts(0) {
        for(int i = 0; i < MAX_USERS; i++)
            for(int j = 0; j < MAX_USERS; j++)
                following[i][j] = false;
    }

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

    bool follow(string usrn1, string usrn2) {
        int id1 = findID(usrn1);
        int id2 = findID(usrn2);
        if(id1 == -1 || id2 == -1) {
            return false;
        }
        following[id1][id2] = true;
        return true;
    }

    bool writePost(string usrn, string msg) {
        if(numPosts == MAX_POSTS || findID(usrn) == -1) {
            return false;
        }
        posts[numPosts++] = {usrn, msg, numPosts};
        return true;
    }

    bool printTimeline(string usrn) {
        int id = findID(usrn);
        if(id == -1) {
            return false;
        }
        vector<Post> timeline;
        for(int i = 0; i < numPosts; i++) {
            if(posts[i].username == usrn) {
                timeline.push_back(posts[i]);
            }
            else {
                for(int j = 0; j < numUsers; j++) {
                    if(following[id][j] && posts[i].username == profiles[j].getUsername()) {
                        timeline.push_back(posts[i]);
                    }
                }
            }
        }
        sort(timeline.begin(), timeline.end(), [](const Post &a, const Post &b) {
            return a.timestamp > b.timestamp;
        });
        for(const Post &post : timeline) {
            cout << profiles[findID(post.username)].getFullName() << ": " << post.message << endl;
        }
        return true;
    }
};

int main() {
    Network nw;
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    nw.follow("mario", "luigi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");

    nw.writePost("mario", "It's a-me, Mario!");
    nw.writePost("luigi", "Hey hey!");
    nw.writePost("mario", "Hi Luigi!");
    nw.writePost("yoshi", "Test 1");
    nw.writePost("yoshi", "Test 2");
    nw.writePost("luigi", "I just hope this crazy plan of yours works!");
    nw.writePost("mario", "My crazy plans always work!");
    nw.writePost("yoshi", "Test 3");
    nw.writePost("yoshi", "Test 4");
    nw.writePost("yoshi", "Test 5");

    cout << endl;
    cout << "======= Mario's timeline =======" << endl;
    nw.printTimeline("mario");
    cout << endl;

    cout << "======= Yoshi's timeline =======" << endl;
    nw.printTimeline("yoshi");
    cout << endl;
}