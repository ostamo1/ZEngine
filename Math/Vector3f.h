#ifndef VECTOR3F_H
#define VECTOR3F_H
class Vector3f
{
public:
    float x;
    float y;
    float z;


public:

    //Make Stuff here
    Vector3f();
    Vector3f(float x= 0,float y = 0, float z = 0);
    ~Vector3f(void);
    // operators
    Vector3f & operator =  (Vector3f & v);         // operator =
    Vector3f & operator += (Vector3f & v);         // operator +=
    Vector3f & operator -= (Vector3f & v);         // operator -=
    Vector3f & operator *= (Vector3f & v);         // operator *=
    Vector3f & operator /= (Vector3f & v);         // operator /=
    Vector3f & operator *= (float f);              // scale up vector
    Vector3f & operator /= (float f);              // scale down vector
    //
    Vector3f & operator + (Vector3f & v);          // operator
    Vector3f & operator - (Vector3f & v);          // operator
    Vector3f & operator * (Vector3f & v);          // operator
    Vector3f & operator / (Vector3f & v);          // operator
    Vector3f & operator * (float f);               // scale up
    Vector3f & operator / (float f);               // scale down
    Vector3f & operator - (void);                  // negate vector
    //
    float GetLength(void);
    void  Normalize(void);
    void Cross(Vector3f &v1,Vector3f &v2);
};
#endif
