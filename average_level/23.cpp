#include <iostream>

int main()
{
    int x[10]{0};
    double y[10]{0};
    for (int i = 0; i < 10; ++i) {
        std::cin >> x[i];
        y[i] = x[i]*x[i] + 0.3;
    }
    double p = 1;
    for (int i = 1; i < 10; i += 2) {
        p *= (x[i] / x[i-1]);
        p *= (y[i] / y[i-1]);
    }
    std::cout << p << std::endl;
    return 0;
}
