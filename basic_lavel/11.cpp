#include <iostream>

int main()
{
    const int size = 14;
    int arr[size]{};
    int sum = 0;
    int count = 0;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
        if (arr[i] > 0 && arr[i] % 2 == 0) {
            ++count;
            sum += arr[i];
        }
    }
    std::cout << "sum -" << sum << std::endl << "count- " << count << std::endl;
    return 0;
}
