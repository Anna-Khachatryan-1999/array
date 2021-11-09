#include <iostream>

int main()
{
    const int size = 17;
    int arr[size]{};
    int sumOdd = 0;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
        if (arr[i] % 2 != 0) sumOdd += arr[i];
    }
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 3 == 0) arr[i] = sumOdd;
    }
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
