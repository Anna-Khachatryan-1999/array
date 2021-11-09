#include <iostream>

void sort_decreasing(double* arr, int index, int size)
{
    double key;
    int j;
    for (int i = index + 1; i < size; ++i) {
        j = i - 1;
        key = arr[i];
        while (j >= index && arr[j] < key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

void sort_increasing(double* arr, int index, int size)
{
    double key;
    int j;
    for (int i = index + 1; i < size; ++i) {
        j = i - 1;
        key = arr[i];
        while (j >= index && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    const int size = 14;
    double arr[size]{};
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    sort_increasing(arr, 0, size/2);
    sort_decreasing(arr, size/2 + 1, size);
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
