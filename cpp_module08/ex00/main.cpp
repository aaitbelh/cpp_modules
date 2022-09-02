#include "easyfind.hpp"
#include <iostream>
int main()
{
    int tab[] = {1, 2, 3, 4, 5};
    std::vector<int>a(tab, tab +( sizeof(tab) / 4));
    std::list<int> b(tab, tab+(sizeof(tab) / 4));
    easyfind(a, 9);
    easyfind(b, 5);

}