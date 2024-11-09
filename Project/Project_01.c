#include <stdio.h>
#include <stdlib.h>

int main()
{
    int random, number;
    random = rand() % 25 + 1;
    while (1)
    {
        printf("Guess the number :\n");
        scanf("%d", &number);
        if (random == number)
        {
            printf("Congratulations !!! You guess it right :)");
            break;
        }
        else if (number > random)
            printf("Try again with a lower number \n");
        else
            printf("Try again with a higher number \n");
    }

    return 0;
}