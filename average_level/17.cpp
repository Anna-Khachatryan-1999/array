#include <iostream>

int main() {
    int size;
    std::cin >> size;
    int* arr = new int[size];
    for (int i = 0 ; i < size; ++i) {
        std::cin >> arr[i];
    }
    int count = 0;

    for (int i = 1 ; i < size ; ++i) {
        if (i == size - 1) break;
        if (arr[i] < arr[i-1] && arr[i] < arr[i+1]) ++count;
    }
    std::cout << count << std::endl;
    return 0;
}
