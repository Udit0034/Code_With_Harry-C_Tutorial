#include <stdio.h>
struct classroom // For e.g. we create a struct of classroom which holds marks of students
{

    int marks;
};

int main()
{
    struct classroom roll_no[5];
    // For eaiser access we make an array of students roll no now each element of this array is a student itself
    //  Think this whole struct classroom as class register and like in resiter for each student there is row similiarly
    //  there roll_no[0] is the row i.e. first student
    //  roll_no[1] is row 2 or  2nd student

    // we can add and extract data like this
    for (int i = 0; i < 5; i++)
    {
        int mark;
        printf("Enter the marks of student %d\n",i+1);
        scanf("%d", &mark);
        roll_no[i].marks = mark;
    }

      for (int i = 0; i < 5; i++)
    {
        printf("There marks of student %d is %d\n",i+1,roll_no[i].marks);    
    }


    return 0;
}