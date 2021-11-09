#include <iostream>

int minSortRowCount(int** arr, int n, int m)
{
    int count = 0;
    bool b = true;
    for (int i = 0; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            if (arr[j][i] >= arr[j-1][i]) {
                b = false;
                break;
            }
        }
        if (b) ++count;
        else b = true;
    }
    return count;
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
    std::cout << minSortRowCount(arr, n, m) << std::endl;
    for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
