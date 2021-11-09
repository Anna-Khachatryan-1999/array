#include <iostream>
#include <cstring>

void bmh_search(
    const uint8_t *x,
    const uint8_t *p
) {
    uint32_t n = strlen((char *)x);
    uint32_t m = strlen((char *)p);
    // Preprocessing
    int jump_table[256];
    for (int k = 0; k < 256; k++) {
        jump_table[k] = m;
    }
    for (int k = 0; k < m - 1; k++) {
        jump_table[p[k]] = m - k - 1;
    }
    for (uint32_t j = 0;
         j < n - m + 1;
         j += jump_table[x[j + m - 1]]) {
        int i = m - 1;
        while (i > 0 && p[i] == x[j + i])
            --i;
        if (i == 0 && p[0] == x[j]) {
    //        REPORT(j);
            std::cout << j << std::endl;
        }
    }
}

int main()
{

    const char* ch = "xbbbmt";
    const char* p = "bbb";
    bmh_search((uint8_t*)ch, (uint8_t*)p);

};
