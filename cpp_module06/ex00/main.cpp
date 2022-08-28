#include <iostream> 
#include <cctype>
#include <string>
#include <iomanip>
#include "convertion.hpp"
#include <cmath>

#define DEFAULT 0
#define INT 1
#define FLOAT 2
#define DOUBLE 3
#define NANINF 4
#define CHAR 5


int _CheckType(std::string var)
{
	char *end = NULL;
	std::strtod(var.c_str(), &end);
	if(var == "nan" || var == "+inf" || var == "-inf")
		return (NANINF);
	if(end[0] == '\0' && (int)var.find(".") == -1)
		return (INT);
	else if(end[0] == '\0')
		return (DOUBLE);
	else if(std::string(end) == "f")
		return (FLOAT);
	else if(var.size() == 1 && std::isprint(var[0]))
		return (CHAR);
	return (0);
}

void _toint(std::string var, int type)
{
	int c = std::atoi(var.c_str());
	std::cout << "int: ";
	if(type == NANINF || var == "nanf")
		std::cout << "impossible" << std::endl;
	else
		std::cout << c << std::endl;
}

void _tochar(std::string var, int type)
{
	int c = std::atoi(var.c_str());
	std::cout << "char: ";
	if(isprint(c))
		std::cout << "'"<< static_cast<char>(c) << "'" << std::endl;
	else if (type == NANINF || var == "nanf")
		std::cout << "Impossible" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void	_tofloat(std::string var, int type)
{
	std::cout << "float: ";
	if(type == NANINF)
		std::cout << var << 'f' << std::endl;
	else
	{
		float num = std::strtof(var.c_str(), 0);
		if(type == INT)
			std::cout << std::setprecision(1) << std::fixed << num << "f" << std::endl;
		else
			std::cout << num << "f" << std::endl;
	}
}

void _todouble(std::string var, int type)
{
	std::cout << "double: ";
	if(type == NANINF)
		std::cout << var << std::endl;
	else
	{
		double num = std::strtod(var.c_str(), 0);
		if(type == DOUBLE)
			std::cout << std::setprecision(1) << std::fixed << num << std::endl;
		else
			std::cout << num << std::endl;
	}
}

void 	Processing(std::string var)
{
	int type = _CheckType(var);
	if(type == 0){
		std::cerr << "ERROR:" << std::endl;
		return ;
	}
	_tochar(var, type);
	_toint(var, type);
	_tofloat(var,type);
	_todouble(var, type);
}




int main(int ac, char **av)
{
	if(ac != 2)
	{
		std::cerr << "ERROR:ARGUMENT" << std::endl;
		return 0;
	}
	Processing(av[1]);
}