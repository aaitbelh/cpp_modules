#include <iostream>
#include <string>
#include <algorithm>
int main()
{
	std::string s1 = "grboz";
	s1.replace(s1.begin(), s1.end(), "lol");
	std::cout << s1 << std::endl;
}