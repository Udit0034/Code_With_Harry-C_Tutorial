#include <stdio.h>
// We can set constam name for datatypes in c for easier access

typedef struct employee // Using typedef to give it name for eaiser use //Note-> struct employee is one datatype not 2 different words
{
    int code;
    float salary;
} emp; // The desierd name is give before the semicolon

int main()
{
    int marks;          // Declare a variable marks of typeint
    typedef int number; // seting the name number to use instead of int
    number mark;        // declare a variable mark by using number but it still is of int type

    // now we can use struct employee in both ways
    struct employee e1; // Declareing a variable e1 for data type e1 which is a struct
    emp e2;             // Declearing a variable by using given name emp

    return 0;
}