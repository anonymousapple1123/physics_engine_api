#ifndef PHYSICS_ENGINE_H
#define PHYSICS_ENGINE_H

#include <vector>
#include "RigidBody.h"
#include "Vector2.h"

class PhysicsEngine {
public:
    std::vector<RigidBody*> bodies;
    float dt;              // Time step (e.g., 1/60 sec)
    Vector2 gravity;       // Global gravity force

    PhysicsEngine(float dt = 0.016f, const Vector2& gravity = Vector2(0.0f, -9.81f));
    ~PhysicsEngine();

    // Add a body to the simulation
    void addBody(RigidBody* body);

    // Run one simulation step: apply forces and integrate
    void step();

    // Simulate for a given number of steps (for debugging/demo)
    void simulate(int steps);
};

#endif // PHYSICS_ENGINE_H
