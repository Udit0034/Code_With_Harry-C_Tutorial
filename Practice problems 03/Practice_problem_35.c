#include <stdio.h>

int main()
{
    int number1, number2, number3, number4, max;
    printf("Enter the first number ...  \n ");
    scanf("%d", &number1);

    printf("Enter the secound number ...  \n ");
    scanf("%d", &number2);

    printf("Enter the third number ...  \n ");
    scanf("%d", &number3);

    printf("Enter the fourth number ...  \n ");
    scanf("%d", &number4);

    max = number1;
    if (number2 > max)
        max = number2;
    if (number3 > max)
        max = number3;
    if (number4 > max)
        max = number4;

    printf("The maximum number you enter is %d\n ", max);

    return 0;
}