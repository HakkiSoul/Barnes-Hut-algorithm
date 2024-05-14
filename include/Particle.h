#ifndef PARTICLE_H
#define PARTICLE_H

struct Particle {
    double x, y; // Position
    double vx, vy; // Velocity
    double ax, ay; // Acceleration
    double mass;
};

#endif // PARTICLE_H
