#ifndef PHYSICS_ENGINE_H
#define PHYSICS_ENGINE_H

#include <vector>
#include "RigidBody.h" // Include RigidBody.h here

class PhysicsEngine {
public:
    void addRigidBody(RigidBody* body);
    void update(float deltaTime);
    const std::vector<RigidBody*>& getRigidBodies() const;

private:
    std::vector<RigidBody*> bodies;
};

#endif // PHYSICS_ENGINE_H
