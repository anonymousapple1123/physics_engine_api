#include "PhysicsEngine.h"

// PhysicsEngine Implementation
void PhysicsEngine::addRigidBody(RigidBody* body) {
    bodies.push_back(body);
}

void PhysicsEngine::update(float deltaTime) {
    for (auto body : bodies) {
        body->update(deltaTime);
    }
}

const std::vector<RigidBody*>& PhysicsEngine::getRigidBodies() const {
    return bodies;
}
