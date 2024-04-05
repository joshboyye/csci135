
/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab9C

This program will create a class Coord3D that stores the x, y, and z coordinates of a point in 3D space. It will also have functions that calculate the distance from the origin, compare two points to see which is farther from the origin, and move a point in 3D space.
*/
#include <iostream>
#include <cmath>
using namespace std;
class Coord3D {
public:
    double x;
    double y;
    double z;
};

double length(Coord3D *p) {
    double distance = std::sqrt(p->x * p->x + p->y * p->y + p->z * p->z);
    return distance;
}
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2) {
    double dist1 = length(p1);
    double dist2 = length(p2);

    if(dist1 > dist2) {
        return p1;
    } else {
        return p2;
    }
}
//lab 9 task C
void move(Coord3D *ppos, Coord3D *pvel, double dt) {
    ppos->x = ppos->x + pvel->x * dt;
    ppos->y = ppos->y + pvel->y * dt;
    ppos->z = ppos->z + pvel->z * dt;
}
// Lab9 task C
int main() {
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0); // object pos gets changed
    cout << pos.x << " " << pos.y << " " << pos.z << endl;
    // prints: 2 -10 100.4
}