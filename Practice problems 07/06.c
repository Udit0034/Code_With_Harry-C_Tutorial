#include <stdio.h>

int main()
{
    int table[10][3];
    int num1 = 5, num2 = 7, num3 = 9;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    for (int i = 1; i < 11; i++)
    {
        table[i - 1][0] = num1 * i;
        table[i - 1][1] = num2 * i;
        table[i - 1][2] = num3 * i;
    }
    for (int i = 1; i < 11; i++)
    {
        printf("%d %d %d\n", table[i - 1][0], table[i - 1][1], table[i - 1][2]);
    }
    return 0;
}