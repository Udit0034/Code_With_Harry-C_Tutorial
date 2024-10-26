#include <stdio.h>

int main()
{
    int x = 2, y = 3, z = 3, k = 1;
    // 3*2 / 3 - 3 + 1
    // 6/3 - 3 + 1
    // 2 - 3 + 1
    // 0
    int exp = 3 * x / y - z + k;

    printf("%d", exp);
    return 0;
}