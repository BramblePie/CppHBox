#include <iostream>
#include <vector>

#include "BasicStructures.h"

int main(void)
{
	hb::Vector<float, 2> t = { 1.0f,2.0f };

	auto sizet = sizeof(t);

	std::cout << t[0] << std::endl;

	hb::Matrix<char, 2, 2> m;

	auto sizem = sizeof(m);

	//printf("%f\n", t.x);
	//printf("%f\n", t.y);
	//printf("%f\n", t.z);
	//printf("%c\n", t.w);

	system("pause");

	return 0;
}
