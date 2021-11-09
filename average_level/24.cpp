#include <iostream>

int main()
{
    int arr[10];
    int arr1[10];
    std::cout << "Enter the array element" << std::endl;
    for (int i = 0; i < 10; ++i) {
        std::cin >> arr[i];
        if (arr[i] / 10 == 0 || arr[i] / 10 > 9) {
            std::cout << arr[i] << " - Wrong entry" << std::endl;
            abort();
        }
        arr1[i] = abs(arr[i]/10 - arr[i]%10);
    }
    for (int i = 0; i < 10; ++i) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
