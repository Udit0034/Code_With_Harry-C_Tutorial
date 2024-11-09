#include <stdio.h>
#include <string.h>
struct employee // Struct are created outsitde main   and use to store value of different datatype of a common belonging
{
    int code; // We can define that sub data types of it
    float salary;
    char name[10];
}; // semicolon is important

int main()
{
    struct employee e1; // creating a structure variable

    // As string are also a type of array and we can't copy an array direclty to anoter
    // e1.name = "harry" is incorrect
    strcpy(e1.name, "harry");
    e1.code = 100;
    e1.salary = 71.22;
    printf("Employee 1 - Code: %d, Salary: %.2f, Name: %s\n", e1.code, e1.salary, e1.name);

    // Create a second employee structure and take input from the user
    struct employee e2;
    char emp_name[10];

    printf("Enter the name of employee (max 9 characters):\n");
    gets(emp_name);
    strcpy(e2.name, emp_name);

    printf("Enter the code of employee:\n");
    scanf("%d", &e2.code);

    printf("Enter the salary of employee:\n");
    scanf("%f", &e2.salary);

    printf("Employee 2 - Code: %d, Salary: %.2f, Name: %s\n", e2.code, e2.salary, e2.name);

    return 0;
}