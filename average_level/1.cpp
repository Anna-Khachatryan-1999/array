#include <iostream>

int main()
{
    int arr1[10];
    int arr2[10];
    int arr3[10];
    std::cout << "enter the elements of the first array" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cin >> arr1[i];
    }
    std::cout << "enter the elements of the second array" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cin >> arr2[i];
    }
    int j = 1;
    for (int i = 0; i < 10; i += 2) {
        arr3[i] = arr1[j];
        j += 2;
    }
    j = 0;
    for (int i = 1; i < 10; i += 2) {
        arr3[i] = arr2[j];
        j += 2;
    }
    for (int i = 0; i < 10; ++i) {
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
