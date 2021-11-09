#include <iostream>

int main() {
    int size;
    std::cin >> size;
    int count = 0;
    int* arr = new int[size];
    for (int i = 0 ; i < size; ++i) {
        std::cin >> arr[i];
    }
    int first = 0;
    for (int i = 1 ; i < size ; ++i) {
        if (arr[i] <= arr[i-1]) {
            first = i;
            continue;
        }
        if (first != -1) {
            ++count;
            first = -1;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
