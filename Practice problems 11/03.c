#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *num = (int *)malloc(10 * sizeof(int));
    for (int i = 1; i < 10; i++)
    {
        num[i] = 7 * i;
    }
    realloc(num, 15 * sizeof(int));

    for (int i = 10; i < 16; i++)
    {
        num[i] = 7 * i;
    }
    for (int i = 0; i < 16; i++)
    {
        printf("%d\n", num[i]);
    }

    return 0;
}