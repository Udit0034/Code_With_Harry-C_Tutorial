#include <stdio.h>// It is standard library for functions like fgets or fputs

int main()
{
    FILE *ptr;                     // Making a pointer name ptr of FILE type
    ptr = fopen("harry.txt", "r"); // Making the pointer as the file handle which use as a reffrence to opreate on file
    // Note -> We open file in read mode by r
    // The other modes are
    // "r" -> open for reading
    // "rb" -> open for reading in binary
    // "w" -> open for writing // If the file exists, the contents will beover written
    // "wb" -> open for writing in binary
    // "a" -> open for append // If the file does not exist, it will be created
    // and a+ w+ r+ for doing both reading and writing 

    // After performign opreation we need to close the file to make changes permanent
    fclose(ptr);
    return 0;
}