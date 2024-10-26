#include <stdio.h>

int main()
{

    int i = 2, j;
    scanf("%d", &j);
    while (i < j + 1)
    {
        if (i == j)
        {
            printf("%d is prime", j);
            break;
        }
        else if (j % i == 0)
        {
            printf("%d is not prime", j);
            break;
        }

        else
            i++;
    }

    return 0;

}

