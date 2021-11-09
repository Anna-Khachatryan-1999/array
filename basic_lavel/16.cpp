#include <iostream>

int main()
{
    const int size = 15;
    double arr[size]{};
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
    if (maxindex - minindex < 1) std::cout << "missing element between maximum element and minimum element" << std::endl;
    else std::cout << maxindex - minindex - 1 << std::endl;
    return 0;
}
