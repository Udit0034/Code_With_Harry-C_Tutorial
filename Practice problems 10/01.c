#include <stdio.h>

int main()
{
    FILE *ptr = fopen("integer.txt", "r");
    int num, times;
    printf("How many number you want to read form file\n");
    scanf("%d", &times);
    for (int i = 0; i < times; i++)
    {
        fscanf(ptr, "%d", &num);
        printf("%d\n", num);
    }

    return 0;
}