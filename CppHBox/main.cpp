#include <iostream>

#include "BasicStructures.h"

constexpr bool testing(int i, int j) { return i < j; }

//constexpr void moretests(int i)
//{
//	static_assert(testing(i, 4), "big");
//}

int main(void)
{
	using namespace cppb;

	matrix<float, 2, 2> m22 = {};
	m22 += 1.0f;

	vec2<float> v2(1.0f, 2.2f);

	auto n22 = m22 - v2;
	auto p22 = v2 - m22;

	system("pause");

	return 0;
}