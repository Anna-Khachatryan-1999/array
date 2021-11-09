#include <iostream>

int main()
{
    int arr[14]{};
    int countEven = 0;
    for (int i = 0; i < 14; ++i) {
        std::cin >> arr[i];
        if (arr[i] % 2 == 0) ++countEven;
    }
    std::cout << countEven << std::endl;
    return 0;
}
