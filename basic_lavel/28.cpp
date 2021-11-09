#include <iostream>

int main()
{
    const int size = 17;
    double arr[size]{};
    int count = 0;
    int sumPositive = 0;
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
        if (arr[i] > 0) {
            sumPositive += arr[i];
            ++count;
        }
    }
    sumPositive /= count;
    count = 0;
    for (int i = 0; i < size; ++i) {
        if (abs(arr[i]) > sumPositive) {
            ++count;
            sum += arr[i];
        }
    }
    std::cout << "sum = " << sum << std::endl;
    std::cout << "count = " << count << std::endl;
    return 0;
}
