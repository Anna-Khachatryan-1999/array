#include <iostream>

int main() {
    int size;
    std::cin >> size;
    int* arr = new int[size];
    for (int i = 0 ; i < size; ++i) {
        std::cin >> arr[i];
    }
    int key;
    int j;
    for (int i = 1 ; i < size ; ++i) {
        j = i - 1;
        key = arr[i];
        while (j >= 0 && (key <= 0) && arr[j] >= 0) {
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " " ;
    }
    std::cout << std::endl;
    return 0;
}
