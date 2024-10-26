#include <stdio.h>

int main() {
    int i ;
    scanf("%d",&i);
    for (int k = 1; k < 11; k++)
    {
       printf("%d X %d = %d \n",i,k,i*k);
    }
    
    
    return 0;
}