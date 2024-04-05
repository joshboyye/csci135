
/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab9B

This program will compare two points in 3D space and determine which point is farther from the origin.
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

int main() {
    Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};

    cout << "Address of P: " << &pointP << endl;
    cout << "Address of Q: " << &pointQ << endl << endl;

    Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
   
    cout << "ans = " << ans << endl; // So which point is farther?
}