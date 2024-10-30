#include <stdio.h>

int main() {
    // & Address of Opreator 

    // * Value of Opreator 
    int i = 10;

    int* j = &i;
   
    printf("The value store in i is %d and the address of i is %p \n ",i, &i);


    printf("The value store in j is %p and the address of j is %p \n", j, &j);

   
    printf("\n");
    return 0;
}