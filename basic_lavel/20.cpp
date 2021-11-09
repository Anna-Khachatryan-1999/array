#include <iostream>

int main()
{
    const int size = 16;
    int arr[size]{};
    int count = 0;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
        if (arr[i] % 3 == 0) {
            arr[i] = 0;
            ++count;
        }
    }
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << count << std::endl;
    return 0;
}
