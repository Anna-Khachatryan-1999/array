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

void sortMatrixBelowTheDiagonal(int** arr, int size)
{
    int nsize = (size*size - size)/2;
    int* newArr = new int[nsize];
    int k = 0;
    for (int i = 1; i < size; ++i) {
        for (int j = 0; j < i; ++j) {
            newArr[k] = arr[i][j];
            ++k;
        }
    }
    for (int i = 0; i < nsize; ++i) {
        std::cout << newArr[i] << " ";
    }
    std::cout << std::endl;
    quick_sort(newArr, 0, nsize);
    for (int i = 0; i < nsize; ++i) {
        std::cout << newArr[i] << " ";
    }
    std::cout << std::endl;
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
    sortMatrixBelowTheDiagonal(arr, n);
    for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
