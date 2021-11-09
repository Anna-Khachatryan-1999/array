#include <iostream>

int main()
{
    int size;
    std::cin >> size;
    double* arr = new double[size];
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    double s;
    std::cout << "enter elrment" << std::endl;
    std::cin >> s;

    int index = 0;
    double sub = abs(s - arr[0]);
    double elem = arr[0];
    for (int i = 1; i < size; ++i) {
        if (sub < abs(s - arr[i])) {
            sub = s - arr[i];
            elem = arr[i];
            index = i;
        }
    }
    std::cout << "index = " << index << std::endl;
    std::cout << "elem = " << elem << std::endl;

    return 0;
}
