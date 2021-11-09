#include <iostream>

int main()
{
    const int size = 15;
    double arr[size]{};
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    for (int i = 0; i < size/2 + 1; ++i) {
        std::swap (arr[i], arr[size-1-i]);
    }
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
