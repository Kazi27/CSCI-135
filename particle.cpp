/*
Author: Kazi Sameen Anwar
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 9F

comments
comments
comments
*/


#include <iostream>
#include <cmath>
using namespace std;

class Particle
{
    public: 
        double x, y, z, vx, vy, vz;
};

class Coord3D 
{
    public:
        double x, y, z;
};

// dynamically allocate memory for a particle and initialize it
Particle* createParticle(double x, double y, double z, double vx, double vy, double vz);
// set its velocity to (vx, vy, vz)
void setVelocity(Particle *p, double vx, double vy, double vz);
// get its current position
Coord3D getPosition(Particle *p);
// update particle's position after elapsed time dt
void move(Particle *p, double dt);
// delete all memory allocated for the particle passed by pointer
void deleteParticle(Particle *p);


Particle* createParticle(double x, double y, double z, double vx, double vy, double vz)
{
    Particle *newParticle = new Particle;
    Particle daparticle = {x, y, z, vx, vy, vz};
    *newParticle = daparticle;

    return newParticle;
}

void setVelocity(Particle *p, double vx, double vy, double vz)
{
    (*p).vx = vx;
    (*p).vy = vy;
    (*p).vz = vz;
}

Coord3D getPosition(Particle *p)
{
    Coord3D *position = new Coord3D;
    Coord3D coord3d = {(*p).x, (*p).y, (*p).z}; 
    *position = coord3d;

    return *position;
}

void move(Particle *p, double dt)
{
    (*p).x = (*p).x + (*p).vx * dt;
    (*p).y = (*p).y + (*p).vy * dt;
    (*p).z = (*p).z + (*p).vz * dt;
}

void deleteParticle(Particle *p)
{
    delete p;
}


int main() 
{
    // make new particle
    Particle *p = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);

    double time = 0.0;
    double dt = 0.1;

    while(time < 3.0)
    {
        // update its velocity
        setVelocity(p, 10.0 * time, 0.3, 0.1);

        // move the particle
        move(p, dt);
        time += dt;

        // reporting its coordinates
        cout << "Time: " << time << " \t";
        cout << "Position: " << getPosition(p).x << ", " << getPosition(p).y << ", " << getPosition(p).z << endl;
    }
    // remove the particle, deallocating its memory
    deleteParticle(p);
}