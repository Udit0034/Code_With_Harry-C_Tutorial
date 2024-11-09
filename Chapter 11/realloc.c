#include <stdio.h>
#include <stdlib.h>  // For malloc, calloc, realloc, and free

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for 'n' integers using calloc
    int *number = (int *)calloc(n, sizeof(int));

   

    // Calculate and print the allocated memory size in bytes
    printf("Allocated memory size: %ld bytes\n", n * sizeof(int));

    // Resize the allocated memory to hold 20 integers using realloc
    int new_size = 20;
    number = (int *)realloc(number, new_size * sizeof(int));// The last argument in realloc is like how much u want size not element 
  
    // Print the new allocated memory size after realloc
    printf("Reallocated memory size: %ld bytes\n", new_size * sizeof(int));

    // Free the allocated memory after use
    free(number);

    return 0;
}
