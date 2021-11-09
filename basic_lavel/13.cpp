#include <iostream>

int main()
{
    const int size = 15;
    int arr[size]{};
    int maxindex = 0;
    int minindex = 0;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
        if (arr[maxindex] < arr[i]) {
            maxindex = i;
        }
        if (arr[minindex] > arr[i]) {
            minindex = i;
        }
    }
    std::cout << "max + min = " << arr[maxindex] + arr[minindex] << std::endl;
    std::cout << "max - min = " << arr[maxindex] - arr[minindex] << std::endl;
    return 0;
}
