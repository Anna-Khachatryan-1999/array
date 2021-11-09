#include <iostream>

int main()
{
    const int size = 15;
    int arr[size]{};
    int countNegativeElem = 0;
    int countZero = 0;
    unsigned long int productPositiveElem = 1;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
        if (arr[i] > 0) {
            productPositiveElem *= arr[i];
        } else if (arr[i] < 0) {
            ++countNegativeElem;
        } else {
            ++countZero;
        }
    }
    std::cout << "number of negative element - " << countNegativeElem << std::endl;
    std::cout << "number of zero - " << countZero << std::endl;
    std::cout << "product of positive element - " << productPositiveElem << std::endl;
    return 0;
}
