#ifndef BARNESHUT_H
#define BARNESHUT_H

#include "Particle.h"
#include "Quadtree.h"

class BarnesHut {
public:
    BarnesHut(double width, double height);
    void simulate(std::vector<Particle>& particles, double G, double dt, int num_steps);
private:
    Quadtree* quadtree;
};

#endif // BARNESHUT_H
