#include <stdio.h>


int main()
{
    FILE *ptr;                     // Making a pointer name ptr of FILE type
    ptr = fopen("harry.txt", "r"); // Making the pointer as the file handle which use as a reffrence to opreate on file

    int num;
    fscanf(ptr, "%d", &num); // fscanf is do the same take the input but the f in starting measan it take input from a file

    printf("%d\n", num);

    fscanf(ptr, "%d", &num); // the fscanf take only till it found a whitespace so we need another to read next int

    printf("%d\n", num);

    fclose(ptr);
    return 0;
}