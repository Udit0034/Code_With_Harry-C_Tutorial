#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *num = (int *)calloc(6 , sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &num[i]);
    }
    realloc(num, 10*sizeof(int));
   
    for (int i = 6; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    return 0;
}