#include <iostream>

void sort_decreasing(double* arr, int size)
{
    double key;
    int j;
    for (int i = 1; i < size; ++i) {
        j = i - 1;
        key = arr[i];
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}
   // sort_increasing

int main()
{
    const int size = 12;
    double arr[size]{};
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    sort_decreasing(arr, size);
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << "max + min = " << arr[0] + arr[size-1] << std::endl;
    return 0;
}
