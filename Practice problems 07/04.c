#include <stdio.h>
void reverse(char *a, int length);
void reverse(char *a, int length)
{
    char temp;
   

    for (int i = 0; i < length/2; i++)

    {
       temp =  a[i];
       a[i]= a[length-1-i];
       a[length-1-i] =  temp;

    }
    
}
int main()
{
    char array[5] = {'a','b', 'c', 'd', 'e'};
    for (int i = 0; i < 5; i++)
    {
        printf("%c ", array[i]);
    }
   
     printf("\n");
    reverse(array, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%c ", array[i]);
    }

    return 0;
}