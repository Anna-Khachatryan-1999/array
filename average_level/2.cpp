#include <iostream>

int main()
{
    int arr[8];
    std::cout << "Enter the array element" << std::endl;
    for (int i = 0; i < 8; ++i) {
        std::cin >> arr[i];
        if (arr[i] / 10 == 0 || arr[i] / 10 > 9) {
            std::cout << arr[i] << " - Wrong entry" << std::endl;
            abort();
        }
    }
    int new_arr[8];
    for (int i = 0; i < 8; ++i) {
        new_arr[i] = ((arr[i] / 10) < (arr[i] % 10)) ? arr[i]/10 : arr[i]%10;
    }
    for (int i = 0; i < 8; ++i) {
        std::cout << new_arr[i] << " ";
    }
    std::cout << std::endl;
}
