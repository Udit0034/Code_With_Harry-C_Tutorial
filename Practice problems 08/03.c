#include <stdio.h>

void slice(const char *arr, char *new_arr, char m, char n)
{
    int start = -1;
    int i, j = 0;

    // Find the first occurrence of `m`, start copying from there until `n` is found
    for (i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == m && start == -1)
        {
            start = i; // Set start point when `m` is found
        }
        
        // If `m` has been found, start copying into `new_arr`
        if (start != -1)
        {
            new_arr[j++] = arr[i];
            
            // Stop when we reach `n`
            if (arr[i] == n)
                break;
        }
    }

    new_arr[j] = '\0'; // Null-terminate the sliced string
}

int main()
{
    char a[10];
    char new_arr[10];

    printf("Enter a string (max 9 chars): ");
    scanf("%9s", a);  // Limit input to avoid overflow

    slice(a, new_arr, 'e', 'o');

    printf("Sliced string: %s\n", new_arr);

    return 0;
}
