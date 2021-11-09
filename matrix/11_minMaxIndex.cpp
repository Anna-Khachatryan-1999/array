#include <iostream>
#include <vector>

std::vector<int> minMaxIndex(int** arr, int n, int m)
{
    int min = 0;
    int max = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            if (arr[i][min] > arr[i][j]) {
                min = j;
            }
        }
        if (arr[max][min] < arr[i][min]) {
            max = i;
        }
    }
    std::vector<int> v;
    v.push_back(max);
    v.push_back(min);
    return v;
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
    std::vector<int> v = minMaxIndex(arr, n, m);
    std::cout << "[" << v[0] << " : " << v[1] << "]" << std::endl;
    for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
