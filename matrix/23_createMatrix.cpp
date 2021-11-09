#include <iostream>

void print (int** arr, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    int n;
    std::cout << "size - ";
    std::cin >> n;
    int** arr = new int*[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = new int[n];
    }
    if (n % 2 != 0) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if(j == n / 2) arr[i][j] = 1;
                else if (i == n / 2) arr[i][j] = 1;
                else arr[i][j] = 0;
            }
        }
    } else {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if(j == n/2 - 1 || j == n/2) arr[i][j] = 1;
                else if (i == n / 2 || i == n/2 - 1) arr[i][j] = 1;
                else arr[i][j] = 0;
            }
        }
    }
    std::cout << std::endl;
    print(arr, n, n);
    for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
