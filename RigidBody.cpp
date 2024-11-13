#include "RigidBody.h"

RigidBody::RigidBody(float mass, float x, float y)
    : mass(mass), x(x), y(y), vx(0), vy(0) {}

void RigidBody::applyForce(float fx, float fy) {
    // F = m * a => a = F / m
    vx += fx / mass;
    vy += fy / mass;
}

void RigidBody::update(float deltaTime) {
    x += vx * deltaTime;
    y += vy * deltaTime;
}

float RigidBody::getX() const {
    return x;
}

float RigidBody::getY() const {
    return y;
}
