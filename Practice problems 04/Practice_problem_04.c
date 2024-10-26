#include <stdio.h>

int main() {
    
    int i,sum;
    for ( i = 1; i < 11; i++)
    {
        sum += i*8;
    }
    printf("The sum of 10 multiple of 8 is %d",sum);
    return 0;
}