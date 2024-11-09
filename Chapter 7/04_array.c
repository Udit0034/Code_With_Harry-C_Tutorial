#include <stdio.h>

// Function to increase marks by 10 using pointer notation
void increaseMarks(int *marks, int length)
{
    for (int i = 0; i < length; i++)
    {
        marks[i] += 10; // Increase each element by 10
    }
}

// Another way: Array notation (same effect as pointer notation)
void increaseMarksArray(int marks[], int length)
{
    for (int i = 0; i < length; i++)
    {
        marks[i] += 10;
    }
}

int main(void)
{
    int marks[5] = {50, 60, 70, 80, 90};
    int length = 5; // Length is required because arrays don’t carry size information

    printf("Original Marks:\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", marks[i]);
    }
    printf("\n");

    // Call by reference as &marks[0] == marks (address of first element)
    increaseMarks(marks, length);

    printf("After Increase (Using Pointer Notation):\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", marks[i]);
    }

    // Note: we can't copy one array into anoter directly
    // eg array2 = array1
    return 0;
}
