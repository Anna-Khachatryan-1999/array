#include <iostream>

int main()
{
    const int size = 19;
    int arr[size]{};
    int maxindex = 0;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
        if (arr[maxindex] < arr[i]) {
            maxindex = i;
        }
    }
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) arr[i] = arr[maxindex];
    }
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
