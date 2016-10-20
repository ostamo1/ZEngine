
#include <Windows.h>
#include <iostream>
#include "..\Math\Vector4f.h"
#include "..\Math\Vector3f.h"
#include "..\Math\Vector2f.h"
#pragma warning (disable : 4172)

void PrintVector(const Vector4f &vec)
{
    std::cout << vec.x << " " << vec.y << " " << vec.z << " " << vec.w << std::endl;

}

void PrintVector(const Vector3f &vec)
{
    std::cout << vec.x << " " << vec.y << " " << vec.z << std::endl;

}
void PrintVector(const Vector2f &vec)
{
    std::cout << vec.x << " " << vec.y << std::endl;

}


int WINAPI WinMain(HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow)
{
    Vector4f vec(1,2,3,4);
    Vector3f vec1(1, 2, 3);
    Vector2f vec2(1, 2);
    PrintVector(vec);
    PrintVector(vec1);
    PrintVector(vec2);
    Vector3f vec3(2, 3, 5);
    vec1 += vec3;

    PrintVector(vec1);
    std::cout << "hello" << std::endl;
    return 0;
}
