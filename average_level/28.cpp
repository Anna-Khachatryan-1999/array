#include <iostream>

int main() {
    int size;
    std::cin >> size;
    int sumEven = 0;
    int sumOdd = 0;
    int* arr = new int[size];
    for (int i = 0 ; i < size; ++i) {
        std::cin >> arr[i];
        if (i % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }
    std::cout << sumEven % sumOdd << std::endl;
    return 0;
}
