#include <stdio.h>
struct class
{
    int code;
    float mark;
};

int main()
{
    struct class s1;
    struct class *ptr = &s1;
    s1.code = 1101;
    s1.mark = 95.5;
    printf("The code of student 1 is %d and marks is %f", (*ptr).code, ptr->mark);
    return 0;
}