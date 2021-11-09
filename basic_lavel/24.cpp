#include <iostream>

int main()
{
    const int size = 12;
    double arr[size]{};
    int count = 0;
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    for (int i = 0; i < size - 1; ++i) {
        if (arr[i] < arr[size - 1]) {
            ++count;
            sum += arr[i];
        }
    }
    std::cout << "sum = " << sum << std::endl;
    std::cout << "count = " << count << std::endl;
    return 0;
}
