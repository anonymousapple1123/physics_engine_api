#include <iostream>
#include "PhysicsEngine.h"
#include "Circle.h"

int main() {
    PhysicsEngine physicsEngine;

    // Create a circular rigid body (ball)
    Circle ball(1.0f, 10.0f, 100.0f, 100.0f); // mass, radius, initial position
    ball.applyForce(10.0f, 0.0f); // Apply a force to the ball
    physicsEngine.addRigidBody(&ball); // Add the ball to the physics engine

    // Update the physics engine and print the position of the ball
    for (int i = 0; i < 10; ++i) {
        physicsEngine.update(0.1f); // Update with a deltaTime of 0.1 seconds
        std::cout << "Ball Position: (" << ball.getX() << ", " << ball.getY() << ")\n";
    }

    return 0;
}
