#include <iostream>

int main()
{
    int arr[10]{};
    int maxindex = 0;
    for (int i = 0; i < 10; ++i) {
        std::cin >> arr[i];
        if (arr[maxindex] < arr[i]) {
            maxindex = i;
        }
    }
    std::swap (arr[0], arr[maxindex]);
    for (int i = 0; i < 10; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
