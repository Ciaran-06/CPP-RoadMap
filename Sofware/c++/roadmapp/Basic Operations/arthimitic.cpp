#include <iostream>

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int divide(int x, int y) {
    return x / y;
}

int module(int x, int y) {
    return x % y;
}

int increment(int x) {
    return x++;
}

int decrement(int x) {
    return x--;
}

int main()
{
    std::cout << add(1, 2) << std::endl;
    std::cout << subtract(1, 2) << std::endl;
    std::cout << multiply(1, 2) << std::endl;
    std::cout << divide(1, 2) << std::endl;
    std::cout << module(1, 2) << std::endl;
    std::cout << increment(1) << std::endl;
    std::cout << decrement(1) << std::endl;

    return 0;
}