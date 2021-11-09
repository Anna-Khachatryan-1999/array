#include <iostream>
#include <cmath>

int main()
{
    int arr[12];
    double count = 0;
    for (int i = 0; i < 12; ++i) {
        arr[i] = i*i - 2*i + 19.3*cos(i);
        count += arr[i];
    }
    count /= 12;
    int new_arr[12]{arr[0]};
    int j;
    for(int i = 1; i < 12; ++i) {
        j = i - 1;
        if (arr[i] < count) {
            while (j >= 0 && arr[j] >= count) {
                new_arr[j+1] = new_arr[j];
                --j;
            }
        }
        new_arr[j+1] = arr[i];
    }
    for (int i = 0; i < 12; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "new array      " << count << std::endl;
    for (int i = 0; i < 12; ++i) {
        std::cout << new_arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
