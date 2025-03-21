#include "RigidBody.h"

RigidBody::RigidBody(float mass, const Vector2& position, const Vector2& velocity)
    : mass(mass), position(position), velocity(velocity), force(0.0f, 0.0f)
{
    invMass = (mass != 0.0f) ? 1.0f / mass : 0.0f;
}

void RigidBody::applyForce(const Vector2& f) {
    force += f;
}

void RigidBody::integrate(float dt) {
    // Calculate acceleration
    Vector2 acceleration = force * invMass;
    // Update velocity and position (using simple Euler integration)
    velocity += acceleration * dt;
    position += velocity * dt;
    // Reset force after integration
    force = Vector2(0.0f, 0.0f);
}
