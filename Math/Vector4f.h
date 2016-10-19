#ifndef VECTOR4F_H
#define VECTOR4F_H
class Vector4f
{
public:
    float x;
    float y;
    float z;
    float w;

public:

    //Make Stuff here
    Vector4f();
    Vector4f(float x= 0,float y = 0, float z = 0,float w = 1.0f);
    ~Vector4f(void);
    // operators
    Vector4f & operator =  (Vector4f & v);         // operator =
    Vector4f & operator += (Vector4f & v);         // operator +=
    Vector4f & operator -= (Vector4f & v);         // operator -=
    Vector4f & operator *= (Vector4f & v);         // operator *=
    Vector4f & operator /= (Vector4f & v);         // operator /=
    Vector4f & operator *= (float f);              // scale up vector
    Vector4f & operator /= (float f);              // scale down vector
    //
    Vector4f & operator + (Vector4f & v);          // operator
    Vector4f & operator - (Vector4f & v);          // operator
    Vector4f & operator * (Vector4f & v);          // operator
    Vector4f & operator / (Vector4f & v);          // operator
    Vector4f & operator * (float f);               // scale up
    Vector4f & operator / (float f);               // scale down
    Vector4f & operator - (void);                  // negate vector
    //
    float GetLength(void);
    void  Normalize(void);
    void Cross(Vector4f &v1,Vector4f &v2);
};
#endif
