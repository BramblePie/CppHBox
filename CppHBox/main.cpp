#include <iostream>

#include "BasicStructures.h"

int main(void)
{
	using namespace hb;
	vec<float> v1 = 1.0f;
	vec2<float> v2(v1, 2.0f);
	vec3<float> v3(v2, 3.0f);
	vec4<float> v4(v3, 99.0f);

	system("pause");

	return 0;
}