#include <iostream>
#include <cmath>

auto func(double x) -> double
{
    auto result = 4.0 / (1 + x * x);
    return result;
}

int main(int argc, char *argv[]){
    double sum = 0.0;
    const int N = 500;

    for(double iter = 0.0; iter < 1.0; iter += 1.0 / (double)N){
        sum += func(iter) + func(iter + 1.0 / (double)N);
    }

    sum *= (1.0 / (double)N) / 2.0;

    std::cout << sum << std::endl;

    return 0;
}