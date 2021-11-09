#include <iostream>


void print(int** arr, int n, int m)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}


void bubbleSortMatrix(int** arr, int n, int m)
{
    for (int k = 0; k < n * m - 1; ++k) {
            for (int i = 0; i < n; ++i) {
                for (int j = 1; j < m + 1; ++j) {
                    if (i == n - 1 && j == m) break;
                    if (arr[i][j-1] > (arr[(!(m-j) + i)][(j - (m * !(m-j)))])) {
                        std::swap (arr[i][j-1], arr[(!(m-j) + i)][(j - (m * !(m-j)))]);
                    }
                }
            }
        }
}

void insertionSortMatrix(int** arr, int column, int row)
{
    for (int i = 0; i < column; ++i) {
        for (int j = 0; j < row; ++j) {
            if (i == 0 && j == 0) continue;
            if (arr[i][j] < arr[i - !j][j - 1 + !j * row]) {
                int tmp = arr[i][j];
                int k = i, t = j;
                while (!(k == 0 && t == 0) && (tmp < arr[k - !t][t - 1 + (!t * row)])) {
                    arr[k][t] = arr[k - !t][t - 1 + (!t* row)];
                    if (t == 0) {
                        k = k - !t;
                        t = row;
                    }
                    --t;
                }
                arr[k][t] = tmp;
            }
        }
    }
}

void selectionSortMatrix(int** arr, int column, int row)
{
    int x, y;
    for (int i = 0; i < column; ++i) {
        for (int j = 0; j < row; ++j) {
            x = i; y = j;
            int t = j + 1;
            for (int k = i; k < column; ++k) {
                for (; t < row; ++t) {
                    if (arr[x][y] > arr[k][t]) {
                        x = k;
                        y = t;
                    }
                }
                t = 0;
            }
            std::swap(arr[i][j], arr[x][y]);
        }
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
    bubbleSortMatrix(arr, n, m);
    insertionSortMatrix(arr, n, m);
    selectionSortMatrix(arr, n, m);
    std::cout << std::endl;
    print(arr, n, m);
    for (int i = 0; i < n; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
