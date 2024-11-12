#include <SFML/Graphics.hpp>

int main() {
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "2D Physics Engine");

    // Create a ball
    sf::CircleShape ball(20); // Radius of 20
    ball.setFillColor(sf::Color::Red);
    ball.setPosition(400, 50); // Start position

    // Create a floor
    sf::RectangleShape floor(sf::Vector2f(800, 20)); // Width and height
    floor.setFillColor(sf::Color::Green);
    floor.setPosition(0, 580); // Position at the bottom

    // Physics variables
    float gravity = 0.5f; // Gravity acceleration
    float velocityY = 0.0f; // Vertical velocity
    bool isOnGround = false; // Check if the ball is on the ground

    // Main loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Update physics
        if (!isOnGround) {
            velocityY += gravity; // Apply gravity
            ball.move(0, velocityY); // Move the ball down

            // Check for collision with the floor
            if (ball.getPosition().y + ball.getRadius() * 2 >= floor.getPosition().y) {
                ball.setPosition(ball.getPosition().x, floor.getPosition().y - ball.getRadius() * 2);
                isOnGround = true; // Ball is on the ground
                velocityY = 0; // Reset velocity
            }
        } else {
            // Allow the ball to bounce back if it is on the ground
            if (velocityY == 0) {
                // Reset the ball's position slightly above the floor to allow it to fall again
                ball.setPosition(ball.getPosition().x, floor.getPosition().y - ball.getRadius() * 2);
                velocityY = -10.0f; // Give it an initial upward velocity to simulate a bounce
                isOnGround = false; // Allow it to fall again
            }
        }

        // Clear the window
        window.clear();

        // Draw the floor and the ball
        window.draw(floor);
        window.draw(ball);

        // Display the contents of the window
        window.display();
    }

    return 0;
}
