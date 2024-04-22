#include <iostream>
#include <string>
#include <fstream>
#include <cmath>

auto func(double x) -> double
{
    auto result = std::sin(x) / (1.0 + x * x);
    result += std::exp(x * -1.0) * std::cos(x);
    return result;
}

int main(int argc, char *argv[]){
    std::ofstream csv_file;
    csv_file.open("proIII_ex1-1.xls");

    for(double x = 0.0; x <= 3.0; x += 0.1){
        csv_file << std::to_string(x) << "," << std::to_string(func(x)) << std::endl;
    }

    csv_file.close();
    return 0;
}