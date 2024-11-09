#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *num = (int *)malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &num[i]);
    }

    return 0;
}