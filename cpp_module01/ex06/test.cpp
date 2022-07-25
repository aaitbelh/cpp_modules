ear
l#include <iostream>
#include <string>

int main()
{
	std::string test;
	switch (test){
		case "hello":
			std::cout << "hello";
			break;
		case "HI":
			std::cout << "HI";
			break;
		default:
			std::cout << "nothing";
	}
}