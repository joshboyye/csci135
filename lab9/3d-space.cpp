
/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab9E

This program will create a 3D coordinate dynamically and delete it after it is no longer needed.
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

// Lab9 task E
Coord3D* createCoord3D(double x, double y, double z) {
    Coord3D *p = new Coord3D;
    p->x = x;
    p->y = y;
    p->z = z;
    return p;
}

void deleteCoord3D(Coord3D *p) {
    delete p;
}
// Lab9 task C
/*int main() {
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0); // object pos gets changed
    cout << pos.x << " " << pos.y << " " << pos.z << endl;
    // prints: 2 -10 100.4
}*/
// Lab9 task E
int main() {
    double x, y, z;
    cout << "Enter position: ";
    cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x,y,z);
    
    cout << "Enter velocity: ";
    cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x,y,z);

    move(ppos, pvel, 10.0);

    cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);
}