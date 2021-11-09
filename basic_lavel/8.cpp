#include <iostream>

int main()
{
    double arr[16]{};
    int maxindex = 0;
    int minindex = 0;
    for (int i = 0; i < 16; ++i) {
        std::cin >> arr[i];
        if (arr[maxindex] < arr[i]) {
            maxindex = i;
        }
        if (arr[minindex] > arr[i]) {
            minindex = i;
        }
    }
    std::cout << "maxindex - " << maxindex << std::endl << "minIndex - " << minindex << std::endl;
    return 0;
}
