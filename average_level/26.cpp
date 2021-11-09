#include <iostream>

int main() {
    int size = 12;
    int count = 0;
    int* arr1 = new int[size];
    for (int i = 0 ; i < size; ++i) {
        std::cin >> arr1[i];
    }
    int* arr2 = new int[size];
    for (int i = 0 ; i < size; ++i) {
        std::cin >> arr2[i];
    }
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (arr1[i] == arr2[j]) {
                arr1[i] = 0;
                j = size - 1;
            }
        }
    }
    for (int i = 0 ; i < size; ++i) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
