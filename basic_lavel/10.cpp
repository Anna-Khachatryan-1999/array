#include <iostream>

int main()
{
    const int size = 18;
    int arr[size]{};
    int sumNegativeElem = 0;
    int count = 0;
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
        if (arr[i] < 0) {
            sumNegativeElem += abs(arr[i]);
            ++count;
        }
    }
    sumNegativeElem /= count;
    for (int i = 0; i < size; ++i) {
        if (abs(arr[i]) > sumNegativeElem) {
            sum += arr[i];
        }
    }
    std::cout << sum << std::endl;
    return 0;
}
