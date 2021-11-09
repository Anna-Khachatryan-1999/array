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
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if(j == i) arr[i][j] = 1;
            else if (j <  i) arr[i][j] = 2;
            else arr[i][j] = 0;
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
