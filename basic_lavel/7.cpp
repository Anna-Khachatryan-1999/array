#include <iostream>

int main()
{
    double arr[15]{};
    int count = 0;
    std::cin >> arr[0];
    for (int i = 1; i < 15; ++i) {
        std::cin >> arr[i];
        if (arr[i] > arr[0]) ++count;
    }
    std::cout << count << std::endl;
    return 0;
}
