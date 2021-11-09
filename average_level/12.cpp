#include <iostream>

void insertion_descending (double* arr, int size)
{
    int j = 0;
    double key;
    bool in = false;
    for (int i = 1; i < size; ++i) {
        j = i - 1;
        key = arr[i];
        while (j >= 0 && arr[j] < key) {
            in = true;
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
}

int main()
{
    double arr[12]{0};
    double arr1[12]{0};
    int count = 0;
    for (int i = 0; i < 12; ++i) {
        std::cin >> arr[i];
        arr1[i] = arr[i];
    }
    insertion_descending(arr, 12);
    for (int i = 0; i < 12; ++i) {
        if (arr1[i] != arr[i]) {
            ++count;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
