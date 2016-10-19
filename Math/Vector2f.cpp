#include "Vector2f.h"

Vector2f::Vector2f()
{
    x = 0.0f;
    y = 0.0f;

}
Vector2f::Vector2f(float inx, float iny)
{
    x = inx;
    y = iny;

}
Vector2f::~Vector2f(void)
{
}
Vector2f & Vector2f::operator=(Vector2f & v)
{

    x = v.x;
    y = v.y;

    return *this;
}
Vector2f & Vector2f::operator+=(Vector2f & v)
{
    return (*this = (*this + v));
}
Vector2f & Vector2f::operator-=(Vector2f & v)
{
    return (*this = (*this - v));
}
Vector2f & Vector2f::operator*=(Vector2f & v)
{
    return (*this = (*this * v));
}
Vector2f & Vector2f::operator/=(Vector2f & v)
{
    return (*this = (*this / v));
}
Vector2f & Vector2f::operator*=(float f)
{
    return (*this = (*this * f));
}
Vector2f & Vector2f::operator/=(float f)
{
    return (*this = (*this / f));
}
Vector2f & Vector2f::operator+(Vector2f & v)
{
    return Vector2f(x + v.x, y + v.y);
}
Vector2f & Vector2f::operator-(Vector2f & v)
{
    return Vector2f(x - v.x, y - v.y);
}
Vector2f & Vector2f::operator*(Vector2f & v)
{
    return Vector2f(x * v.x, y * v.y);
}
Vector2f & Vector2f::operator/(Vector2f & v)
{
    return Vector2f(x / v.x, y / v.y);
}
Vector2f & Vector2f::operator*(float f)
{
    return Vector2f(x * f , y * f);
}
Vector2f & Vector2f::operator/(float f)
{
    return Vector2f(x / f, y / f);
}

Vector2f & Vector2f::operator-(void)
{
    return Vector2f(x * -1, y * -1);
}

float Vector2f::GetLength(void)
{
    return 0.0f;
}

void Vector2f::Normalize(void)
{
}

void Vector2f::Cross(Vector2f & v1, Vector2f & v2)
{
}


