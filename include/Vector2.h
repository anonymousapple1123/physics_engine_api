#ifndef VECTOR2_H
#define VECTOR2_H

#include <cmath>

class Vector2 {
public:
    float x, y;

    // Constructors
    Vector2();
    Vector2(float x, float y);

    // Operator Overloads
    Vector2 operator+(const Vector2& other) const;
    Vector2 operator-(const Vector2& other) const;
    Vector2 operator*(float scalar) const;
    Vector2& operator+=(const Vector2& other);

    // Utility Methods
    float magnitude() const;
};

#endif // VECTOR2_H
