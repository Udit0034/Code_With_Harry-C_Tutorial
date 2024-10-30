

#include <stdio.h>

int main()
{
    int marks[5]; // It reserve a  memory space of 5 elements in RAM

    int a = 10;

    printf("The size of int in C is %d\n", sizeof(a));
    // The total size of array =  number of element x size of one element
    // i.e. for array marks which have 5 element of int
    // size of marks = 5 * 4 = 20
    printf("The size of array marks is %d\n", sizeof(marks));

    // Conatanious memory

    int b = 20;
    printf("The memory loacation of int a and int b are\n %u and %u \n", &a, &b);
    // The other elements get there location in RAM un accordingly
    // i.e. we can't access the other one if we know the location of one

    for (int i = 0; i < 5; i++)
        printf("The memory loaction of index %d is %u\n", i, &marks[i]);
    return 0;
}