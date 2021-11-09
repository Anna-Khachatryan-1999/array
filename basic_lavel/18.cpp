#include <iostream>

int main()
{
    const int size = 12;
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
    std::cout << "[" << arr[minindex] << ";" << arr[maxindex] << "]" << std::endl;
    return 0;
}
