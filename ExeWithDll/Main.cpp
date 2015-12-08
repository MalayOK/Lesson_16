#include <math.h>
#include <iostream>
#include <iostream>
#include <Windows.h>
#include "../Dll_Vector/Dll_Vector.h"

class _declspec(dllimport) vector2d;
using namespace std;
int main()
{
	lesson_9::vector2d vec1{ 4,1 };
	lesson_9::vector2d vec2{ 5,7 };
	lesson_9::vector2d vec3;
	vec3 = vec1 + vec2;
	cout << vec3 << endl;
	vec3 = vec1 - vec2;
	float a = vec1*vec2;
	cout << a << endl;
	vec3 = vec1 / vec2;
	vec3 = vec1 + 2;
	vec1 /= 2;
	vec3 = vec1 - 2;
	cout << vec3;
	cin.get();
	return 0;
}