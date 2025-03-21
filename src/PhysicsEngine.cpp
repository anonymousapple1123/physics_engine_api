#include "PhysicsEngine.h"
#include <iostream>

PhysicsEngine::PhysicsEngine(float dt, const Vector2& gravity)
    : dt(dt), gravity(gravity) {}

PhysicsEngine::~PhysicsEngine() {
    // Clean up dynamically allocated bodies
    for (RigidBody* body : bodies) {
        delete body;
    }
    bodies.clear();
}

void PhysicsEngine::addBody(RigidBody* body) {
    bodies.push_back(body);
}

void PhysicsEngine::step() {
    // Apply gravity to each dynamic body
    for (RigidBody* body : bodies) {
        if (body->invMass > 0.0f) {  // Skip static bodies
            body->applyForce(gravity * body->mass);
        }
    }
    // Integrate each body’s motion
    for (RigidBody* body : bodies) {
        body->integrate(dt);
    }
    // Future enhancement: collision detection/resolution goes here
}

void PhysicsEngine::simulate(int steps) {
    for (int i = 0; i < steps; ++i) {
        step();
        // Debug: print body positions
        for (RigidBody* body : bodies) {
            std::cout << "Body at (" << body->position.x << ", " << body->position.y << ")\n";
        }
        std::cout << "----\n";
    }
}
