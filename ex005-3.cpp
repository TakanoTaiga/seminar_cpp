#include <iostream>
#include <cmath>
#include <numbers>

auto func(double x) -> double
{
    auto result = 4.0 / (1 + x * x);
    return result;
}

int main(int argc, char *argv[]){
    double sum = 0.0;
    int N = 1;

    while(true){
        for(double iter = 0.0; iter < 1.0; iter += 1.0 / (double)N){
            sum += func(iter) + func(iter + 1.0 / (double)N);
        }

        sum *= (1.0 / (double)N) / 2.0;

        std::cout << N << "," << sum << std::endl;

        if(std::abs(std::numbers::pi - sum) < 1e-7){
            std::cout << N << std::endl;
            return 0;
        }

        N++;
        sum = 0.0;
    }
}