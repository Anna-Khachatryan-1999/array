#include <iostream>

int main()
{
    int max = -1;
    int arr[9];
    for (int i = 0; i < 9; ++i) {
        std::cin >> arr[i];
        if (arr[i] > 0 && arr[i] > max) {
            max = arr[i];
        }
    }
    if (max == -1) {
        std::cout << "There is no positive element in array" << std::endl;
    } else {
        std::cout << max << std::endl;
    }
    return 0;
}
