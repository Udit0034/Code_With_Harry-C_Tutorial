#include <stdio.h>

int main()
{
    FILE *ptr = fopen("table.txt", "w");
    int num;
    printf("Which number's table you want to genrate\n");
    scanf("%d", &num);
    for (int i = 1; i < 11; i++)
    {
        fprintf(ptr, "%d  x %d = %d\n", num, i, num * i);
    }

    return 0;
}