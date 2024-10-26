#include <stdio.h>

int main() {
    int i = 1;
    int sum ;
    while (i<11)
    {
        sum += i;
        i++;
        printf("%d\n",sum);
    }
    
    
    printf("The total sum is :  %d",sum);
    return 0;
}