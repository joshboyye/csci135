
/*
Author: Joshua Wang
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab9F

This program will create a particle dynamically and delete it after it is no longer needed.
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

class Particle {
public:
    Coord3D position;
    Coord3D velocity;
};

Particle* createParticle(double x, double y, double z, double vx, double vy, double vz) {
    Particle *p = new Particle;
    p->position.x = x;
    p->position.y = y;
    p->position.z = z;
    p->velocity.x = vx;
    p->velocity.y = vy;
    p->velocity.z = vz;
    return p;
}

void setVelocity(Particle *p, double vx, double vy, double vz) {
    p->velocity.x = vx;
    p->velocity.y = vy;
    p->velocity.z = vz;
}

Coord3D getPosition(Particle *p) {
    return p->position;
}

void move(Particle *p, double dt) {
    p->position.x += p->velocity.x * dt;
    p->position.y += p->velocity.y * dt;
    p->position.z += p->velocity.z * dt;
}

void deleteParticle(Particle *p) {
    delete p;

}int main() {
    Particle *p = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);
    double time = 0.0;
    double dt = 0.1;
    while(time < 3.0) {
        // update its velocity
        setVelocity(p, 10.0 * time, 0.3, 0.1);

        // move the particle
        move(p, dt);
        time += dt;

        // reporting its coordinates
        cout << "Time: " << time << " \t";
        cout << "Position: "
             << getPosition(p).x << ", "
             << getPosition(p).y << ", "
             << getPosition(p).z << endl;
    }
    deleteParticle(p);
}