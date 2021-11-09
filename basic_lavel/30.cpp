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
    std::cout << "minimum element - " << arr[minindex] << std::endl;
    std::cout << "index - " << minindex << std::endl;
    return 0;
}
