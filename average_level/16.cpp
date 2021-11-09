#include <iostream>

int main() {
    int size;
    std::cin >> size;
    int* arr = new int[size];
    for (int i = 0 ; i < size; ++i) {
        std::cin >> arr[i];
    }

    int index = 0;
    int sum = 0;
    bool b = false;

    for (int i = 0 ; i < size ; ++i) {
        if (arr[i] < 0) {
           b = true;
           break;
        }
        ++index;
        sum += arr[i];
    }
    if (b == true) {
        std::cout << "index: " << index << std::endl <<
            "sum: " << sum << std::endl;
    } else {
        std::cout << "dont negative element" << std::endl;
    }
    return 0;
}
