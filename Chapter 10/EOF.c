#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    FILE *ptr;
    ptr = fopen("harry.txt", "r");
    while (1)
    {
        ch = fgetc(ptr); // when all the content of a file has been read break the loop !
        // Note here in fgetc the c means char and in fgets s means string 
        if (ch == EOF)
        {
            break;
        }
        printf("%c",ch); 
           }
    fclose(ptr);

    return 0;
}