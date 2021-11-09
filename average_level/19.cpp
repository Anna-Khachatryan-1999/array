#include <iostream>

int main() {
    int size;
    std::cin >> size;
    int firstNegativIndex = -1;
    int countZeroIndex = -1;
    int sum = 0;
    int* arr = new int[size];
    for (int i = 0 ; i < size; ++i) {
        std::cin >> arr[i];
        if (firstNegativIndex == -1 && arr[i] < 0) {
            firstNegativIndex = i;
        } if (arr[i] == 0) {
            countZeroIndex = i;
        }
        sum += arr[i];
    }
    if (firstNegativIndex == -1 || countZeroIndex == -1 || (countZeroIndex - firstNegativIndex) < 0) {
        std::cout << "Wrong entry" << std::endl;
        abort();
    }
    for (int i = firstNegativIndex + 1 ; i < size ; ++i) {
        if (arr[i] == 0) break;
        sum -= arr[i];
    }
    std::cout << sum << std::endl;
    return 0;
}
