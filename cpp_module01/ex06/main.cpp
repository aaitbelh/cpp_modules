#include "Harl.hpp"
#include <vector>
#include <algorithm>
#include <iostream>
#include <functional>
#include <cctype>
int main(int ac, char **av)
{
    Harl newObject;
    std::string input;
    if(ac == 2)
    {
        input = av[1];
        for(int i = 0; i < input.size(); i++)
            input[i] = toupper(input[i]);
        newObject.complain(input);
    }
}