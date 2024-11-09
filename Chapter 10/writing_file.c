#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *ptr;
    ptr = fopen("harry.txt", "w"); // Note -> The write mode will  clean any data in file and start from start
    // Append mode keep previous data and start end
    int num = 9900;
    fprintf(ptr, "%d", num); // fprintf is do the same give the output but the f in starting measan it give output to   a file

   
    fclose(ptr);

  
    return 0;
}