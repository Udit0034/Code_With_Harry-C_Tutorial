#include <stdio.h>

int main()
{

    int number[15][3];

    // Initializing the array with values from 1 to 45
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 3; j++)
            number[i][j] = i + j + 1;
    }

   for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 3; j++)
            { printf("%u \t",&number[i][j]);}
            printf("\n");
    }
    
          
    return 0;
}