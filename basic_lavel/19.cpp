#include <iostream>

int main()
{
    const int size = 19;
    int arr[size]{};
    int sum = 0;
    bool b = true;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
        if (b == true && arr[i] > 0) {
            sum += arr[i];
        } else {
            b = false;
        }
    }
    if (b == true) {
        std::cout << "don't negative element" << std::endl;
    } else {
        std::cout << sum << std::endl;
    }
    return 0;
}
