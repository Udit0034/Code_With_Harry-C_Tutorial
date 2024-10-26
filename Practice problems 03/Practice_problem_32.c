#include <stdio.h>

int main()
{
    /* 2.5 – 5.0L 5%
       5.0L - 10.0L 20%
       Above 10.0L 30%
    */
    float salary;
    printf("Enter salary in L ... \n");

    scanf("%f", &salary);

    if (salary < 2.5)
    {
        printf("You are extempted form tax \n");
    }

    else if (2.5 <= salary && salary < 5.0)
    {
        printf("You have to pay 5 percent tax \n");
    }

    else if (5.0 <= salary && salary < 10.0)
    {
        printf("You have to pay 20 percent tax \n");
    }

    else if (salary > 10.0)
    {
        printf("You have to pay 30 percent tax \n");
    }
    return 0;
}