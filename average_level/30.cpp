#include <iostream>

int main()
{
    int size1;
    std::cin >> size1;
    int max1 = -1;
    double* arr1 = new double[size1];
    for (int i = 0; i < size1; ++i) {
        std::cin >> arr1[i];
        if (arr1[max1] < arr1[i]) {
            max1 = i;
        }
    }
    int size2;
    std::cin >> size2;
    int max2 = -1;
    double* arr2 = new double[size2];
    for (int i = 0; i < size2; ++i) {
        std::cin >> arr2[i];
        if (arr2[max2] < arr2[i]) {
            max2 = i;
        }
    }
    int key = arr1[max1];
    arr1[max1] = arr2[max2];
    arr2[max2] = key;
    for (int i = 0; i < size1; ++i) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < size2; ++i) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
