#include <iostream>

int main()
{
    int arr[12]{};
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        std::cin >> arr[i];
        sum += arr[i];
    }
    int arr1[12]{};
    for (int i = 0; i < 12; ++i) {
        arr1[i] = arr[i];
    }
    arr1[5] = sum / 12;
    for (int i = 0; i < 12; ++i) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
