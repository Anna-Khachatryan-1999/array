#include <iostream>

int main()
{
    const int size = 15;
    double arr[size]{};
    unsigned long int productNegative = 1;
    unsigned long int productPositive = 1;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
        if (arr[i] > 0) {
            productPositive *= arr[i];
        } else if (arr[i] < 0) {
            productNegative *= abs(arr[i]);
        }
    }
    std::cout << productPositive - productNegative << std::endl;
    return 0;
}
