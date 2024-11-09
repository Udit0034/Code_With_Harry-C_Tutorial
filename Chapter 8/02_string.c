#include <stdio.h>

int main()
{
    char st[6];
    //  Using %s
    scanf("%s", st); // it automaticly add \0 in the end

    printf("%s", st); // we can use it to print without using loop
    // it does't work with muliple words or mulit line string
    return 0;
}