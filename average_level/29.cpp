#include <iostream>

int main() {
    int size;
    std::cin >> size;
    int sum = 0;
    int count = 0;
    int* arr = new int[size];
    for (int i = 0 ; i < size; ++i) {
        std::cin >> arr[i];
        sum += arr[i];
    }
    sum /= size;
    for (int i = 0 ; i < size; ++i) {
        if (arr[i] > sum) {
            ++count;
        }
    }
    std::cout << (double)count / size  << '%' << std::endl;
    return 0;
}
