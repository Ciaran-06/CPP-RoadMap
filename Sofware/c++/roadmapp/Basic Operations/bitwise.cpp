#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int x = 5, y = 1;

    std::cout << "x = " << x << "," << " y = " << y << std::endl;
    std::cout << "x & y = " << (x & y) << std::endl;

    std::cout << "x | y = " << (x | y) << std::endl;

    std::cout << "x ^ y = " << (x ^ y) << std::endl;
    
    std::cout << "x << y = " << (x << y) << std::endl;
    std::cout << "x >> y = " << (x >> y) << std::endl;

    std::cout << "~(" << x << ") = " << (~x) << std::endl;
}