#include <iostream>
#include <cmath>

auto func(double x) -> double
{
    auto result = x * x - std::sin(x);
    return result;
}

auto deltaFunc(double x) -> double
{
    auto result = 2.0 * x - std::cos(x);
    return result;
}

int main(int argc, char *argv[]){
    double x_r = 2.0;

    while (std::fabs(func(x_r)) > 1e-4)
    {
        x_r -= func(x_r) / deltaFunc(x_r);
        std::cout << x_r << std::endl;
    }

    
    return 0;
}