#ifndef RIGIDBODY_H
#define RIGIDBODY_H

class RigidBody {
public:
    RigidBody(float mass, float x, float y);
    
    void applyForce(float fx, float fy);
    void update(float deltaTime);
    
    float getX() const;
    float getY() const;

protected:
    float mass;
    float x, y; // Position
    float vx, vy; // Velocity
};

#endif // RIGIDBODY_H
