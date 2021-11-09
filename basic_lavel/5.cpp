#include <iostream>

int main()
{
    int arr[9]{};
    int maxindex = 0;
    int minindex = 0;
    for (int i = 0; i < 9; ++i) {
        std::cin >> arr[i];
        if (arr[maxindex] < arr[i]) {
            maxindex = i;
        }
        if (arr[minindex] > arr[i]) {
            minindex = i;
        }
    }
    std::cout << arr[minindex] << " " << arr[maxindex] << std::endl;
    std::swap (arr[minindex], arr[maxindex]);
    for (int i = 0; i < 9; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
