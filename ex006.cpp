#include <iostream>
#include <cmath>

double f(double x) {
    return 4.0 / ( 1 + x * x);
}

double simpson(double a, double b, int n) {
    if (n % 2 == 1) n++;
    double h = (b - a) / n;
    double s = f(a) + f(b);

    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        s += f(x) * (i % 2 == 0 ? 2 : 4);
    }

    return s * h / 3;
}


int main(int argc, const char * argv[]) {
    double a = 0;
    double b = 1;
    int n = 1000;

    std::cout << simpson(a, b, n) << std::endl;
    return 0;
}
