#include <climits>
#include <iostream>

int sortMaxMax(int** arr, int n, int m)
{
    int max = INT_MIN;
    int maxCurrent = INT_MIN;
    bool b = true, k = false;
    for (int i = 0; i < m; ++i) {
        if (arr[1][i] > arr[0][i]) {
            for (int j = 2; j < n; ++j) {
                if (arr[j][i] <= arr[j-1][i]) {
                    b = false;
                    break;
                }
            }
            if (b) maxCurrent = arr[n-1][i];
            else b = true;
        } else if (arr[1][i] < arr[0][i]) {
            for (int j = 2; j < n; ++j) {
                if (arr[j][i] >= arr[j-1][i]) {
                    b = false;
                    break;
                }
            }
            if (b) maxCurrent = arr[0][i];
            else b = true;
        }
        if (max < maxCurrent) {
            max = maxCurrent;
            k = true;
        }
    }
    if (k) return max;
    return 0;
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
    std::cout << sortMaxMax(arr, n, m) << std::endl;
    for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
