#include <iostream>
#include <cmath>


void insertion_descending (int* arr, int size)
{
    int j = 0;
    int key;
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

void insertion_ascending (double* arr, int size)
{
    int j = 0;
    double key;
    for (int i = 1; i < size; ++i) {
        j = i - 1;
        key = arr[i];
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int x[17]{0};
    double y[17]{0};
    for (int i = 0; i < 17; ++i) {
        std::cin >> x[i];
        if (cos(x[i]) > 0) {
            y[i] = x[i]*x[i]*x[i] - 7.5;
        } else {
            y[i] =x[i]*x[i]- 5 * exp (sin (x[i]));
        }
    }
    insertion_descending(x, 17);
    insertion_ascending (y, 17);
    double R[16];
    int j = 0;
    for (int i = 0; i < 16; i += 2) {
       R[i] = x[j];
       R[i+1] = y[j];
       j += 2;
    }
    for (int i = 0; i < 17; ++i) {
        std::cout << x[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < 17; ++i) {
        std::cout << y[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < 16; ++i) {
        std::cout << R[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
