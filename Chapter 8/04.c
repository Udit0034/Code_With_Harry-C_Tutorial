#include <stdio.h>

int main()
{
    char *ptr = "harry";
    puts(ptr);  // This tells the compiler to store the string in memory and assigned address is stored in a char pointer.
    //  Note:
    //  1. Once a string is defined using char st [] = “harry”, it cannot be reinitialized to something else.
    //  2. A string defined using pointers can be reinitialized.
    ptr = "Rohan";
    puts(ptr);
    return 0;
}