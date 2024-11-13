#include <iostream>
#include "Circle.h"

int main() {
    Circle ball(1.0f, 0.5f, 0.0f, 0.0f); // mass = 1kg, radius = 0.5m, initial position (0,0)

    ball.applyForce(10.0f, 0.0f); // Apply a force of 10N in the x direction
    ball.update(0.1f); // Update the position with a deltaTime of 0.1 seconds

    std::cout << "Ball Position: (" << ball.getX() << ", " << ball.getY() << ")\n";
    return 0;
}
