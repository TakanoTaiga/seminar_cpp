#include <iostream>
#include <cmath>

auto func(double x) -> double
{
    auto result = x * x - std::sin(x);
    return result;
}

int main(int argc, char *argv[]){
    double x_M = 0.0;
    double x_1 = 0.5;
    double x_2 = 1.5;

    while (std::abs(x_1 - x_2) > 10e-4)
    {
        x_M = (x_1 + x_2) / 2.0;

        if(std::signbit(func(x_1)) == std::signbit(func(x_M))){
            x_1 = x_M;
        }else if(std::signbit(func(x_2)) == std::signbit(func(x_M))){
            x_2 = x_M;
        }
        std::cout << "x_M: " << x_M << "\tx_1: " << x_1 << "\tx_2: " << x_2 << std::endl;
    }
    
    return 0;
}