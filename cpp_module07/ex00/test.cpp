#include <iostream>

template<typename T>

void swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}
int main()
{
	int a =1 ;
	int b = 2;
	::swap(a, b);
	std::cout << a << "||||" << b << std::endl;
}