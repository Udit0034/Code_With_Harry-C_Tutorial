#include <stdio.h>

int main()
{
    int table[10];

    for (int i = 1; i < 11; i++)
    {
        table[i - 1] = 5 * i;
    }

    for (int i = 1; i < 11; i++)
    {

        printf("%d\n", table[i - 1]);
    }

    return 0;
}