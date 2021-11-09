#include <iostream>

void insertionSort(int* arr, int size) {
    int key;
    int j;
    for (int i = 1; i < size; ++i) {
        j = i - 1;
        key = arr[i];
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}


int main()
{
    int size1;
    int size2;
    std::cin >> size1;
    int* arr1 = new int[size1];
    std::cout << "enter the elements of the first array" << std::endl;
    for (int i = 0; i < size1; ++i) {
        std::cin >> arr1[i];
    }
    std::cin >> size2;
    int* arr2 = new int[size2];
    std::cout << "enter the elements of the second array" << std::endl;
    for (int i = 0; i < size2; ++i) {
        std::cin >> arr2[i];
    }

    insertionSort(arr1, size1);
    insertionSort(arr2, size2);

    int* arr3 = new int[size1 + size2];
    int index1 = 0;
    int index2 = 0;
    int count = 0;
    int j = 0;
    for (int i = 0; i < size1 + size2; ++i) {
        if (index1 == size1) {
            break;
        }
        if (index2 == size2) {
            break;
        }
        if (arr1[index1] == arr2[index2]) {
            arr3[j] = arr1[index1];
            ++j;
            ++count;
            ++index1;
            ++index2;
        } else if (arr1[index1] < arr2[index2]) {
            ++index1;
        } else {
            ++index2;
        }
    }
    for (int i = 0; i < count; ++i) {
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;
    return 0;
}
