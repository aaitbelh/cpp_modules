#include "convertion.hpp"
int main(int ac, char **av)
{
	if(ac != 2)
	{
		std::cerr << "ERROR:ARGUMENT" << std::endl;
		return 0;
	}
	Processing(av[1]);
}