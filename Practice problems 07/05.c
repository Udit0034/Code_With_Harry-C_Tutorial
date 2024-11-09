#include <stdio.h>

int count_positive(int *a, int length)
{
    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if (a[i] > 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int number[10] = {5, -6, 82, -36, 45, -8, 46, 36, -94, 19};
    printf("There are %d positive number in this array", count_positive(number, 10));

    return 0;
}