#include "Vector4f.h"

Vector4f::Vector4f()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
	w = 1.0f;
}
Vector4f::Vector4f(float inx, float iny, float inz, float inw)
{
	x = inx;
	y = iny;
	z = inz;
	w = inw;
}
Vector4f::~Vector4f(void)
{
}
Vector4f & Vector4f::operator=(Vector4f & v)
{

	x = v.x;
	y = v.y;
	z = v.z;
	w = v.w;
	return *this;
}
Vector4f & Vector4f::operator+=(Vector4f & v)
{
	return (*this = (*this + v));
}
Vector4f & Vector4f::operator-=(Vector4f & v)
{
	return (*this = (*this - v));
}
Vector4f & Vector4f::operator*=(Vector4f & v)
{
	return (*this = (*this * v));
}
Vector4f & Vector4f::operator/=(Vector4f & v)
{
	return (*this = (*this / v));
}
Vector4f & Vector4f::operator*=(float f)
{
	return (*this = (*this * f));
}
Vector4f & Vector4f::operator/=(float f)
{
	return (*this = (*this / f));
}
Vector4f & Vector4f::operator+(Vector4f & v)
{
	return Vector4f(x + v.x, y + v.y, z + v.z, w + v.w);
}
Vector4f & Vector4f::operator-(Vector4f & v)
{
	return Vector4f(x - v.x, y - v.y, z - v.z, w - v.w);
}
Vector4f & Vector4f::operator*(Vector4f & v)
{
	return Vector4f(x * v.x, y * v.y, z * v.z, w * v.w);
}
Vector4f & Vector4f::operator/(Vector4f & v)
{
	return Vector4f(x / v.x, y / v.y, z / v.z, w / v.w);
}
Vector4f & Vector4f::operator*(float f)
{
	return Vector4f(x * f , y * f, z * f, w * f);
}
Vector4f & Vector4f::operator/(float f)
{
	return Vector4f(x / f, y / f, z / f, w / f);
}

Vector4f & Vector4f::operator-(void)
{
	return Vector4f(x * -1, y * -1, z * -1, w * -1);
}

float Vector4f::GetLength(void)
{
	return 0.0f;
}

void Vector4f::Normalize(void)
{
}

void Vector4f::Cross(Vector4f & v1, Vector4f & v2)
{
}


