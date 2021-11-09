#include <iostream>

int main()
{
    const int size = 12;
    double arr[size]{};
    int minindex = 0;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
        if (arr[minindex] > arr[i]) {
            minindex = i;
        }
    }
    arr[minindex] *= 3;
    std::swap (arr[minindex], arr[size-1]);
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
