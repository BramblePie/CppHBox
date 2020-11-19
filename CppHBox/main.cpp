#include <iostream>
#include <vector>

#include "BasicStructures.h"

int main(void)
{
	hb::vector<float, 2> t = { 1.0f,2.0f };

	auto sizet = sizeof(t);

	std::cout << t[0] << std::endl;

	hb::matrix<float, 3, 3> m = { 'a','b','c','d','e','f','g','h','i' };
	hb::matrix<float, 2, 2> n = {};

	auto sizem = sizeof(m);

	hb::vec3<float> v0 = m[0];
	hb::vec3<float> v1 = m[1];

	auto w0 = n[0];
	auto w1 = n[1];

	w0 += 1;
	w0 += w1;

	auto w_ = w0 + 1;
	w_ = w_ + w0 + w1;

	system("pause");

	return 0;
}