#include <iostream>

int main()
{
    double arr[14]{0};
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        std::cin >> arr[i];
    }
    for (int i = 0; i < 7; ++i) {
        std::swap (arr[i], arr[7 + i]);
    }
    for (int i = 0; i < 14; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
