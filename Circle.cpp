#include "Circle.h"

Circle::Circle(float mass, float radius, float x, float y)
    : RigidBody(mass, x, y), radius(radius) {}

float Circle::getRadius() const {
    return radius;
}
