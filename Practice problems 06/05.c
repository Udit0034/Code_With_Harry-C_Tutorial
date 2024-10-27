#include <stdio.h>

int main() {
    int i = 10;            // Initialize variable
    int *ptr = &i;       // Pointer that holds the address of i
    int **ptr2 = &ptr;   // Pointer to pointer that holds the address of ptr

    // Print the value of i using pointer to pointer
    printf("Value of i using pointer to pointer: %d\n", **ptr2);

    return 0;
}
