#include <iostream>

int main()
{
    int arr[11]{0};
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        std::cin >> arr[i];
        if (arr[i] < 0 && (arr[i] % 2 != 0) ) {
            sum += arr[i];
        }
    }
    for (int i = 0; i < 11; ++i) {
        if (arr[i] % 3 == 0) {
            arr[i] = sum;
        }
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
