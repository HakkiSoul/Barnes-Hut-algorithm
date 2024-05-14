#ifndef QUADTREE_H
#define QUADTREE_H

#include "Particle.h"

struct Quadtree {
    double x, y, width, height;
    Particle* particle;
    Quadtree* NW;
    Quadtree* NE;
    Quadtree* SW;
    Quadtree* SE;
};

Quadtree* create_quadtree(double x, double y, double width, double height);
void insert_particle(Quadtree* quadtree, Particle* particle);
void compute_forces_recursive(Quadtree* quadtree, Particle* particle, double G);
void compute_forces(std::vector<Particle>& particles, Quadtree* quadtree, double G);

#endif // QUADTREE_H
