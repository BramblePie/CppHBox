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

	matrix<float, 3, 2> A;
	A[0][0] = 1;
	A[0][1] = 2;
	A[1][0] = 3;
	A[1][1] = 4;
	A[2][0] = 2;
	A[2][1] = -1;

	matrix<float, 2, 3> B;
	B[0][0] = 3;
	B[0][1] = 1;
	B[0][2] = 4;
	B[1][0] = 2;
	B[1][1] = 6;
	B[1][2] = 9;

	auto C = A * B;

	system("pause");

	return 0;
}