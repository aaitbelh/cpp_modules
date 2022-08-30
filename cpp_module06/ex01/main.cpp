
#include "Data.hpp"

int main()
{
	Data data;
	data.a = 'a';
	std::cout << d.a << std::endl;
	uintptr_t uintdata = serialize(&data);
	Data *ptr = deserialize(uintdata);
	std::cout << ptr->a << std::endl;
}