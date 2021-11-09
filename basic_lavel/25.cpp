#include <iostream>

int main()
{
    const int size = 15;
    int arr[size]{};
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
        if (arr[i] > 0) {
            sum += arr[i];
        }
    }
    int arr1[size]{};
    for (int i = 0; i < size; ++i) {
        arr1[i] = arr[i] - sum;
    }
    for (int i = 0; i < size; ++i) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
