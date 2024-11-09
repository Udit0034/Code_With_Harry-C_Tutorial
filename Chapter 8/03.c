#include <stdio.h>

int main()
{
    char st[30];
    gets(st); // The entered string is stored in st!

    puts(st); // we will not use in genral practice due to buffer overflow 
    return 0;
}