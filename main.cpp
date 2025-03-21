#include "PhysicsEngine.h"
#include "RigidBody.h"
#include "Vector2.h"

int main() {
    // Create the physics engine with a 60 FPS time step
    PhysicsEngine engine(0.016f, Vector2(0.0f, -9.81f));

    // Create a dynamic rigid body with mass=1.0, initial position (0,10), and initial velocity (2,0)
    RigidBody* body = new RigidBody(1.0f, Vector2(0.0f, 10.0f), Vector2(2.0f, 0.0f));
    engine.addBody(body);

    // Run the simulation for 10 steps (for demonstration)
    engine.simulate(10);

    return 0;
}
