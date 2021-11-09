#include <iostream>

int main()
{
    const int size = 14;
    int arr[size]{};
    int sumEven = 0;
    unsigned long int productOdd = 1;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        }
        else {
            productOdd *= arr[i];
        }
    }
    std::cout << "sum of even element - " << sumEven << std::endl;
    std::cout << "priduct of odd element - " << productOdd << std::endl;
    return 0;
}
