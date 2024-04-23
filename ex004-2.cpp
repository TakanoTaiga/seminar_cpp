#include <iostream>
#include <cmath>

auto func(double x) -> double
{
    auto result = -0.02 * x * x * x + 0.05 * x * x + x - 1.0;
    return result;
}

auto deltaFunc(double x) -> double
{
    auto result = -0.06 * x * x + 0.1 * x + 1.0;
    return result;
}

int main(int argc, char *argv[]){
    double x_r = 4.5;

    while (std::fabs(func(x_r)) > 1e-4)
    {
        x_r -= func(x_r) / deltaFunc(x_r);
        std::cout << x_r << std::endl;
    }

    
    return 0;
}