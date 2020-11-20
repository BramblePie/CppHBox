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
	matrix<int, 2, 2> n22 = {};

	m22 += 4;
	m22 *= 2.7;
	n22 += 2;

	m22 += n22;

	system("pause");

	return 0;
}