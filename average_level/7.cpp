#include <iostream>

int main()
{
    double arr[16] {0};
    for (int i = 0; i < 16; ++i) {
        std::cin >> arr[i];
    }
    double sumEven = 0;
    double sumThird = 0;
    for (int  i = 0; i < 16; ++i) {
        if (i % 2 == 0) sumEven += arr[i];
        if (i % 3 == 0) sumThird += arr[i];
    }
    std::cout << sumEven - sumThird << std::endl;
    return 0;
}
