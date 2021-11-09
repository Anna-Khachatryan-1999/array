#include <iostream>
#include <climits>

void print (int** arr, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void sideDiagonaCheck(int** arr, int n)
{
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i; ++j) {
            std::swap (arr[i][j], arr[n - j - 1][n-i-1]);
        }
    }
}

int main()
{
    int n;
    std::cout << "size = ";
    std::cin >> n;
    int** arr = new int*[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = new int[n];
    }
    std::cout << "enter the element" << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> arr[i][j];
        }
    }
    sideDiagonaCheck(arr, n);
    std::cout << std::endl;
    print(arr, n, n);
   for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
