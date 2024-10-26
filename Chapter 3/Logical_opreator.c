#include <stdio.h>

int main()
{
    /*
    Any non-zero elemnet either number float or character is consider as true
    && -> And
    || -> OR
    !  -> NOT
     */

    int a = 12;
    int b = 0;
    if (1)
    {
        printf("This will work as 1 which is a non-zero  consider as true  \n");
    }

    if (a && b)
    {
        printf("This will not work \n");
    }

    if (a || b)
    {
        printf("This will print as the OR of 12 and 0 is 12 which is non zero i.e. True \n");
    }

    if (!(a && b))
    {
        printf("This will work as the AND of 12 and 0 is 0 but not of zero is 1 \n");
    }
    return 0;
}