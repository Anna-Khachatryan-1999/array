#include <iostream>

int main()
{
    int arr[20]{};
    int countEven = 0;
    int countOdd = 0;
    for (int i = 0; i < 20; ++i) {
        std::cin >> arr[i];
        if (arr[i] % 2 == 0) ++countEven;
        else { ++countOdd; }
    }
    if (countEven > countOdd) {
        std::cout << "even elements are more." << std::endl;
    } else if (countEven < countOdd) {
        std::cout << "odd elements are more." << std::endl;
    } else {
        std::cout << "even elements equal odd elements." << std::endl;
    }
    return 0;
}
