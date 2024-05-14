#include <iostream>
#include <vector>
#include "Particle.h"
#include "BarnesHut.h"

int main() {
    const double G = 6.67430e-11; // Gravitational constant
    const double dt = 0.01; // Time step
    const int num_steps = 1000; // Number of simulation steps
    const int num_bodies = 100; // Number of bodies
    const double width = 100.0; // Width of simulation area
    const double height = 100.0; // Height of simulation area

    std::vector<Body> bodies(num_bodies);
    // Инициализация тел

    BarnesHut barnesHut(width, height);
    barnesHut.simulate(bodies, G, dt, num_steps);

    return 0;
}
