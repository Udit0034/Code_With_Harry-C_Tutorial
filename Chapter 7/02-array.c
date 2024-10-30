#include <stdio.h>

int main()
{
    int marks[7];
        printf("Enter the marks of students\n");
        for (int i = 0; i < 7; i++) //Using for loop to iterate  through the array and filling each index
    {
            scanf("%d", &marks[i]);
    }
    
    for (int i = 0; i < 7; i++) // using for loop to iterate through arrray and acessing and printing each index
    {
        printf("The marks student at index %d is %d\n",i, marks[i]);
    }

    return 0;
}