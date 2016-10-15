#include <Windows.h>
#include <iostream>
#include "..\Math\Vector4f.h"

/**/

void PrintVector(const Vector4f &vec)
{
	std::cout << vec.x << " " << vec.y << " " << vec.z << " " << vec.w << std::endl;

}
/**/
/*
void PrintVector(const Vector3f &vec)
{
	std::cout << vec.x << " " << vec.y << " " << vec.z << std::endl;

}
void PrintVector(const Vector2f &vec)
{
	std::cout << vec.x << " " << vec.y << std::endl;

}
*/

int WINAPI WinMain(HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow)
{
	Vector4f vec(1,2,3,4);
	PrintVector(vec);

	return 0;
}