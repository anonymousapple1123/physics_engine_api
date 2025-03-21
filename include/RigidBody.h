#ifndef RIGID_BODY_H
#define RIGID_BODY_H

#include "Vector2.h"

class RigidBody {
public:
    float mass;
    float invMass;  // Inverse mass (0 for static objects)
    Vector2 position;
    Vector2 velocity;
    Vector2 force;

    RigidBody(float mass = 1.0f, const Vector2& position = Vector2(), const Vector2& velocity = Vector2());

    // Apply an external force to the body
    void applyForce(const Vector2& force);

    // Integrate the body's state using a simple Euler method
    void integrate(float dt);
};

#endif // RIGID_BODY_H
