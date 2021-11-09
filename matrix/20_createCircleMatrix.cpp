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
    }
    std::cout << "enter the element" << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> arr[i][j];
        }
    }
print(arr, n, m);
   for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
