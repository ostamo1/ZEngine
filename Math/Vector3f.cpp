#include "Vector3f.h"

Vector3f::Vector3f()
{
    x = 0.0f;
    y = 0.0f;
    z = 0.0f;

}
Vector3f::Vector3f(float inx, float iny, float inz)
{
    x = inx;
    y = iny;
    z = inz;

}
Vector3f::~Vector3f(void)
{
}
Vector3f & Vector3f::operator=(Vector3f & v)
{

    x = v.x;
    y = v.y;
    z = v.z;

    return *this;
}
Vector3f & Vector3f::operator+=(Vector3f & v)
{
    return (*this = (*this + v));
}
Vector3f & Vector3f::operator-=(Vector3f & v)
{
    return (*this = (*this - v));
}
Vector3f & Vector3f::operator*=(Vector3f & v)
{
    return (*this = (*this * v));
}
Vector3f & Vector3f::operator/=(Vector3f & v)
{
    return (*this = (*this / v));
}
Vector3f & Vector3f::operator*=(float f)
{
    return (*this = (*this * f));
}
Vector3f & Vector3f::operator/=(float f)
{
    return (*this = (*this / f));
}
Vector3f & Vector3f::operator+(Vector3f & v)
{
    return Vector3f(x + v.x, y + v.y, z + v.z);
}
Vector3f & Vector3f::operator-(Vector3f & v)
{
    return Vector3f(x - v.x, y - v.y, z - v.z);
}
Vector3f & Vector3f::operator*(Vector3f & v)
{
    return Vector3f(x * v.x, y * v.y, z * v.z);
}
Vector3f & Vector3f::operator/(Vector3f & v)
{
    return Vector3f(x / v.x, y / v.y, z / v.z);
}
Vector3f & Vector3f::operator*(float f)
{
    return Vector3f(x * f , y * f, z * f);
}
Vector3f & Vector3f::operator/(float f)
{
    return Vector3f(x / f, y / f, z / f);
}

Vector3f & Vector3f::operator-(void)
{
    return Vector3f(x * -1, y * -1, z * -1);
}

float Vector3f::GetLength(void)
{
    return 0.0f;
}

void Vector3f::Normalize(void)
{
}

void Vector3f::Cross(Vector3f & v1, Vector3f & v2)
{
}


