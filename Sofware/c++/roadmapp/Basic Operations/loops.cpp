#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h> 

int main()
{
    srand (time(NULL));
    int x;
    bool even;

    for (int i = 0; i < 10; i++)
    {
      //  std::cout << i << std::endl;
    }

    for (int j = 0; j < 10; ++j)
    {
        //std::cout << j << std::endl;
    }

    while (!even)
    {
        x = rand() % 10 + 1;
        std::cout << x << std::endl;
        
        if (x % 2 ==0)
        {
            even = true;
            continue;
        }
    }
}