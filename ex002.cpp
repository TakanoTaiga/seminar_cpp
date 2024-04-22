#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <numbers>

auto func(double x) -> double
{
    auto result = std::sin(2.0 * std::numbers::pi *10.0 * x);
    return result;
}

int main(int argc, char *argv[]){
    std::ofstream svg_file;

    svg_file.open("plot.svg");
    svg_file << "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"8000\" height=\"500\">\n";
    svg_file << "<rect width=\"100%\" height=\"100%\" fill=\"white\"/>\n";

    for(double x = 0; x < 1; x += 0.002){
        const auto result =  func(x);
        svg_file << "<circle cx=\"" << x * 100.0 + 50.0 << "\" cy=\"" << result * 100.0 + 50.0 << "\" r=\"1\" fill=\"black\" />\n";
    }

    svg_file << "</svg>\n";
    svg_file.close();
    return 0;
}