#include <stdio.h>

int main()
{
    int i, j, k = 1;

    printf("Enter any number : \n");
    scanf("%d", &j);

    if (j == 1 || j == 0)
    {
        printf("Factorial of %d is 1", j);
    }
    else
    {
        for (i = j; i > 1; i--)
        {

            k *= i;
        }
        printf("Factorial of %d is %d", j, k);

        return 0;
    }
}