#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *ptr;
    ptr = fopen("harry_info.txt", "r+"); // If there is no file then it will create one by itself

    char name[10] = "Harry ", job[10] = "Engineer\n", n[20], j[20];
    // We can similary use  fputs to write  a string to file
    fgets(n, 20, ptr); 
    printf("%s", n);
    fputs(name, ptr);
    fputs(job, ptr);

    
    fclose(ptr);
    return 0;
}