#include "BarnesHut.h"

BarnesHut::BarnesHut(double width, double height) {
    quadtree = create_quadtree(0, 0, width, height);
}

void BarnesHut::simulate(std::vector<Particle>& particles, double G, double dt, int num_steps) {
    // Реализация алгоритма Барнса-Хата
}
