#include <stdio.h>

int main() {
    // Pointer arithmetic 
// Pointer for array of ints
    int number[4] = {10,20,30,40};
    int* ptr = number; 
    // same as int* ptr = &number[0]
    
    for ( int i = 0; i < 4; i++)
    {
       
        printf("The value at address %u is %d\n",ptr,*ptr); // acessing it my address with the help of pointers 
        ptr++; // incrimenting pointer 
    }
     // Here pointer increase by 4 
printf("\n");
    char alpha[] = {'a','b','c','d'};
    char* poi = alpha;
    for ( int k = 0; k < 4; k++)
    {
       
        printf("The value at address %u is %c\n",poi,*poi); // acessing it my address with the help of pointers 
        poi++; // incrimenting pointer 
    }
     // Here pointer increase by 1
    return 0;
}