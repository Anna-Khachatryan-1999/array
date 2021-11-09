#include <iostream>

int main()
{
    int arr[17];
    int sum = 0;
    std::cout << "Enter the array element" << std::endl;
    for (int i = 0; i < 17; ++i) {
        std::cin >> arr[i];
        if (arr[i] / 10 == 0 || arr[i] / 10 > 9) {
            std::cout << arr[i] << " - Wrong entry" << std::endl;
            abort();
        }
    }
    for (int i = 0; i < 17; ++i) {
        sum += ((arr[i] / 10) + (arr[i] % 10));
    }
    std::cout << sum << std::endl;
    return 0;
}
