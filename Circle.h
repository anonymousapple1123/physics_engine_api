#ifndef CIRCLE_H
#define CIRCLE_H

#include "RigidBody.h"

class Circle : public RigidBody {
public:
    Circle(float mass, float radius, float x, float y);
    
    float getRadius() const;

private:
    float radius;
};

#endif // CIRCLE_H
