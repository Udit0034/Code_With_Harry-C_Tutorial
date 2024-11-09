#include <stdio.h>
#include <string.h>


// void show(struct employee e) This is how a struct is pass to a function 

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1;         // Define an employee structure
    struct employee *ptr = &e1; // Pointer to the structure e1

    // Use pointer to initialize the structure members
    // -> this is know as arrow opreateor

    ptr->code = 101;            // This is same as  (*ptr).code
    ptr->salary = 50000.0;      //This is same as(*ptr).salary
    strcpy(ptr->name, "Alice"); //This is same as(*ptr).name

    // Print the structure members using the pointer
    printf("Employee Details:\n");
    printf("Code: %d\n", (*ptr).code);
    printf("Salary: %.2f\n", ptr->salary);
    printf("Name: %s\n", ptr->name);

    return 0;
}
