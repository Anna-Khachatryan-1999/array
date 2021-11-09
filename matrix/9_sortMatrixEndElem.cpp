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

void sortMatrixEndElem(int** arr, int n, int m)
{
    int maxSum;
    int* arr1;
    for (int i = 0; i < n - 1; ++i) {
        maxSum = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[maxSum][m-1] < arr[j][m-1]) {
                maxSum = j;
            }
        }
        arr1 = arr[maxSum];
        arr[maxSum] = arr[i];
        arr[i] = arr1;
    }
    arr1 = nullptr;
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
    sortMatrixEndElem(arr, n, m);
    std::cout << std::endl;
    print(arr, n, m);
   for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
