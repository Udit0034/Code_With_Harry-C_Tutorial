#include <stdio.h>

int main()
{
    int marks[5];
    marks[0] = 10; // Simple way to enter a value at a perticuler index
    marks[1] = 56;
    marks[2] = 88;
    marks[3] = 70;
    marks[4] = 16;
    // Alternative way to declare a array
    int cgpa[3] = {9, 8, 8};
     // arrays can be initialized while declaration
    float number[] = {33, 40};
    printf("The marks of 3rd student is %d \n", marks[2]); // Simple way to access a value at a perticuler index

    return 0;
}