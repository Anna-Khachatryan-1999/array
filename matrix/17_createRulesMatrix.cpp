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
    std::cout << "column size = ";
    std::cin >> n;
    int m;
    std::cout << "row size = ";
    std::cin >> m;
    int** arr = new int*[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = new int[m];
        arr[i][0] = 1;
    }
    for (int j = 1; j < m; ++j) {
        arr[0][j] = 1;
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }
    std::cout << std::endl;
    print(arr, n, m);
   for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
