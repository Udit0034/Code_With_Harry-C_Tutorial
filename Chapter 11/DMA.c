#include <stdio.h>
#include <stdlib.h> // For malloc and free

int main()
{
    // Dynamic memory allocation is a process that allocates memory for variables and data structures at runtime
    //  when the program requests it
    /*
    int n;                                    This is variable lenght array they aren't dynamic memory allocation
    scanf("%d", &n);
    char name[n];
    printf("The size of array name is %d", sizeof(name));
    */

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for an array of 'n' characters
    char *name = (char *)malloc(n * sizeof(char)); // In C mostly complex statement read form left to right
                                                   // (char *) for typecasting the void pointer
    // Check if malloc succeeded in allocating memory
    if (name == NULL) // malloc return a null pointer if allocation failed
    {
        printf("Memory allocation failed.\n");
        return 1; // Exit if allocation failed
    }

    printf("The size of the dynamically allocated array is %ld bytes\n", n * sizeof(char));
    // Checking what is the value at array
    for (int i = 0; i < n; i++)
    {
        printf("%c\n", name[i]); // it produce garbage value cause we do not initlazie it 
    }

    // Free the allocated memory after use
    free(name);

    return 0;
}

// Difference betwenn NULL wild and void pointer

// This is basicly use when we have small memory and have to reuse it like aurdiono or micro controllers