#include <stdio.h>

int main()
{
    int number[10] = {5, 6, 82, 36, 45, 8, 46, 36, 94, 19};
    int *ptr = number;
    ptr = ptr + 2;
    printf("%d", *ptr);

    return 0;
}