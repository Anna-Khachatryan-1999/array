#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    int size;
    std::cin >> size;
    std::unordered_map<int, int> m;
    int* arr = new int[size];
    for (int i = 0 ; i < size; ++i) {
        std::cin >> arr[i];
        ++m[arr[i]];
    }
    int* arr1 = new int[size];
    int count = 0;
    for (int i = 0 ; i < size; ++i) {
        if (m[arr[i]] <= 2) {
            arr1[count] = arr[i];
            ++count;
            std::cout << arr1[i] << std::endl;
        }
    }
    for (int i = 0 ; i < count; ++i) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
