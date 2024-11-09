#include <stdio.h>
#include <stdlib.h> // For malloc and free

int main()
{
    // calloc is same as malloc just it is that it take 2 arguments and initalize all the value to 0

    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int *number = (int *)calloc(n, sizeof(int));
    
    printf("The size of the dynamically allocated array is %ld bytes\n", n * sizeof(int));

//checking if all the value are 0 or not 
for (int i = 0; i < n; i++)
{
    printf("%d\n",number[i]);
}

    // Free the allocated memory after use
    free(number);

    return 0;
}
