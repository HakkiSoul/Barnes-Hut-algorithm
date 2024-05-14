#include "Quadtree.h"

Quadtree* create_quadtree(double x, double y, double width, double height) {
    Quadtree* quadtree = new Quadtree;
    quadtree->x = x;
    quadtree->y = y;
    quadtree->width = width;
    quadtree->height = height;
    quadtree->particle = nullptr;
    quadtree->NW = nullptr;
    quadtree->NE = nullptr;
    quadtree->SW = nullptr;
    quadtree->SE = nullptr;
    return quadtree;
}

void insert_particle(Quadtree* quadtree, Particle* particle) {
    // Реализация вставки тела в квадродерево
}

void compute_forces_recursive(Quadtree* quadtree, Particle* particle, double G) {
    // Рекурсивный расчет силы взаимодействия между телами
}

void compute_forces(std::vector<Particle>& particles, Quadtree* quadtree, double G) {
    // Расчет силы взаимодействия между всеми телами с использованием квадродерева
}
