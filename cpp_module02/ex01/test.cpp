#include <iostream>
#include <cmath>
int main()
{
	float a = 1234.4321f;
	int b = roundf(a * (1 << 8));
	std::cout << b << std::endl;
	std::cout << (b / (float)(1 << 8))<< std::endl;
}