#include <stdio.h>

int main()
{
    int table[10];
    int number;
    scanf("%d", &number);
    for (int i = 1; i < 11; i++)
    {
        table[i - 1] = number * i;
    }

    for (int i = 1; i < 11; i++)
    {

        printf("%d x %d = %d\n",number,i, table[i - 1]);
    }

    return 0;
}