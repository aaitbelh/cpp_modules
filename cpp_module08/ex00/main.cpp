#include "easyfind.hpp"

int main()
{
    std::vector<int>  a = {1, 2,3,4, 5};
    std::list<int> b = {1, 2, 3, 4, 5};
    easyfind(a, 9);
    easyfind(b, 5);

}