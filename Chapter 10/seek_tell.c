#include <stdio.h>

int main() {
    // Open a file in read-write mode. File must exist for "r+".
    FILE *file = fopen("example.txt", "r+");
  

    // Write some text to the file
    fprintf(file, "Hello, world!");

    // Move the file pointer to the beginning of the file using fseek
    fseek(file, 0, SEEK_SET);

    // Print the current position of the file pointer
    long position = ftell(file);
    printf("File pointer is at position: %ld\n", position);

    // Move the file pointer 7 bytes from the start
    fseek(file, 7, SEEK_SET);
    position = ftell(file);
    printf("File pointer moved to position: %ld\n", position);

    // Read a single character at the new position
    char ch = fgetc(file);
    printf("Character read from new position: %c\n", ch);

    // Move the file pointer to the end of the file
    fseek(file, 0, SEEK_END);
    position = ftell(file);
    printf("File pointer at the end of file: %ld\n", position);

    // Close the file
    fclose(file);
    return 0;
}
