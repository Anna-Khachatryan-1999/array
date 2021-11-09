#include <iostream>

int position(int* arr, int start, int end)
{
    int i = start - 1;
    while (start < end) {
        if (arr[start] < arr[end]) {
            std::swap(arr[i+1], arr[start]);
            ++i;
        }
        ++start;
    }
    std::swap(arr[i+1], arr[end]);
    return i+1;
}

void quick_sort(int* arr, int start, int end)
{
    if (start < end) {
        int pos = position(arr, start, end);
        quick_sort(arr, start, pos - 1);
        quick_sort(arr, pos + 1, end);
    }
}

int sameRowCount(int** arr, int column, int row)
{
    for (int i = 0; i < column; ++i)
    {
        quick_sort(arr[i], 0, row - 1);
    }

    int count = 0;
    int current = 0;
    for (int i = 1; i < column; ++i) {
        for (int j = 0, k = 0; j < row, k < row;) {
            if (arr[0][j] == arr[i][k]) {
                ++current;
                ++j; ++k;
            } else if (arr[0][j] > arr[i][k]) {
                ++k;
            } else {
                ++j;
            }
        }
        if (current == (row/2 + 1)) {
            ++count;
        }
        current = 0;
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
            if (arr[i][j] < 0 || arr[i][j] > 100) {
                std::cout << "wrong entry" << std::endl;
                abort();
            }
        }
    }
    std::cout << sameRowCount(arr, n, m) << std::endl;
    for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
