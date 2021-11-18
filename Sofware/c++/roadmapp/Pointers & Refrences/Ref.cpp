#include <iostream>


class test
{
public:
    int age = 69;
    std::string name = "test";
};

void solveRef(test& x)
{
 x.age = 10;
 x.name = "ciaran";

//std::cout << x.name << " " << x.age << std::endl;
}

void solve(test x)
{
 x.age = 100;
 x.name = "failded";

std::cout << x.name << " " << x.age << std::endl;
}

int main()
{
test t;
test b;
solveRef(t);
solve(b);
std::cout << t.name << " " << t.age << std::endl;
std::cout << b.name << " " << b.age << std::endl;
}