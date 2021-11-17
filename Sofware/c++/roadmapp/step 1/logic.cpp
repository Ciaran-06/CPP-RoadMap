#include <iostream>

bool same(int x, int y) 
{
    if (x != y) {
        return false;
    } else {
        return true;
    }
}

bool different(int x, int y)
{
    if(x == y)
    {
        return false;
    }
    else
    {
       return true; 
    } 

}

bool onlyOne(int x, int y)
{
    if (x % 2 == 0 xor y % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool both(int x, int y)
{
    if (x % 2 == 0 && y % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool oneOrAnother(int x, int y)
{
    if (x % 2 == 0 || y % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    std::cout << same(1, 1) << std::endl; //check if number is same
    std::cout << different(1, 2) << std::endl; //checks if number is diffrent
    std::cout << onlyOne(2,3) << std::endl; //checks if only one is even
    std::cout << both(2,4) << std::endl; //checks if both numbers are even
    std::cout << oneOrAnother(2,4) << std::endl; //checks if either is even
    return 0;
}