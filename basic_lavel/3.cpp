#include <iostream>

int main()
{
    int arr[11]{};
    int sum = 0;
    int count = 0;
    for (int i = 0; i < 11; ++i) {
        std::cin >> arr[i];
        sum += arr[i];
    }
    sum /= 11;
    for (int i = 0; i < 11; ++i) {
        if (abs(arr[i]) > sum) ++count;
    }
    std::cout << count << std::endl;
    return 0;
}
