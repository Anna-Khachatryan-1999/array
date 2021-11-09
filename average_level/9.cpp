#include <iostream>
#include <cmath>

template <typename T>
void insertion_descending (T* arr, int size)
{
    int j = 0;
    T key;
    for (int i = 1; i < size; ++i) {
        j = i - 1;
        key = arr[i];
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int x[15]{0};
    double y[15]{0};
    for (int i = 0; i < 15; ++i) {
        std::cin >> x[i];
        y[i] = cos(x[i]*x[i]) + 2.97 * (log(i*i) * log(i*i));
    }
    insertion_descending<int> (x, 15);
    insertion_descending<double> (y, 15);
    double R[30];
    int i1 = 0;
    int i2 = 0;
    for (int i = 0; i < 30; ++i) {
        if (i1 == 15 || (x[i1] < y[i2])) {
            R[i] = y[i2];
            ++i2;
        } else {
            R[i] = x[i1];
            ++i1;
        }
    }
    for (int i = 0; i < 15; ++i) {
        std::cout << x[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < 15; ++i) {
        std::cout << y[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < 30; ++i) {
        std::cout << R[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
