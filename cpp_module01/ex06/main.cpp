#include "Harl.hpp"
#include <vector>
#include <algorithm>
#include <iostream>
#include <functional>
#include <cctype>
int main(int ac, char **av)
{
    Harl newObject;
    if(ac == 2)
        newObject.complain(av[1]);
}