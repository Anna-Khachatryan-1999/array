#include <iostream>

int main()
{
    const int size = 18;
    int arr[size]{};
    int sumNegativeElem = 0;
    unsigned long int productPositiveElem = 1;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
        if (arr[i] < 0) {
            sumNegativeElem += abs(arr[i]);
        } else if (arr[i] > 0){
            productPositiveElem *= arr[i];
        }
    }
    std::cout << productPositiveElem / sumNegativeElem << std::endl;
    return 0;
}
