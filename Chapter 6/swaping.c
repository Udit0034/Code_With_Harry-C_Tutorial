#include <stdio.h>

int swap1(int a, int b);
int swap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int swap2(int *a, int *b);
int swap2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int a = 2;
    int b = 6;
    printf("The current value of a is %d and current value of b is %d \n", a, b);
    swap1(a, b); // Calling the swap1 function *This is also called call by value*
    printf("The  value of a after calling swap1 is %d and  value of b after calling swap1 is %d \n", a, b);

    swap2(&a, &b); // Calling the swap2 function *This is also called call by refrence*
    printf("The  value of a after calling swap2 is %d and  value of b after calling swap2 is %d \n", a, b);

    return 0;
}








