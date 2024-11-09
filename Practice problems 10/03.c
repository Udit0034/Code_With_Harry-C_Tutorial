#include <stdio.h>
int main()
{
    // Open files
    FILE *ptr = fopen("para.txt", "r");
    FILE *ptr2 = fopen("para2.txt", "a");

    // Check if files were successfully opened
    if (ptr == NULL || ptr2 == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    // Copy content from para.txt to para2.txt, character by character
    char ch;
    while ((ch = fgetc(ptr)) != EOF) {
        fputc(ch, ptr2);  // Write each character to the output file
    }

    // Close the files
    fclose(ptr);
    fclose(ptr2);

    return 0;
}
