#ifndef VECTOR2F_H
#define VECTOR2F_H
class Vector2f
{
public:
    float x;
    float y;

public:

    //Make Stuff here
    Vector2f();
    Vector2f(float x= 0,float y = 0);
    ~Vector2f(void);
    // operators
    Vector2f & operator =  (Vector2f & v);         // operator =
    Vector2f & operator += (Vector2f & v);         // operator +=
    Vector2f & operator -= (Vector2f & v);         // operator -=
    Vector2f & operator *= (Vector2f & v);         // operator *=
    Vector2f & operator /= (Vector2f & v);         // operator /=
    Vector2f & operator *= (float f);              // scale up vector
    Vector2f & operator /= (float f);              // scale down vector
    //
    Vector2f & operator + (Vector2f & v);          // operator
    Vector2f & operator - (Vector2f & v);          // operator
    Vector2f & operator * (Vector2f & v);          // operator
    Vector2f & operator / (Vector2f & v);          // operator
    Vector2f & operator * (float f);               // scale up
    Vector2f & operator / (float f);               // scale down
    Vector2f & operator - (void);                  // negate vector
    //
    float GetLength(void);
    void  Normalize(void);
    void Cross(Vector2f &v1,Vector2f &v2);
};
#endif
