#include <stdio.h>

int main() {
    int i;
    scanf("%d",&i);
    int *j = &i;
    printf("The address of variable i is %p and the value store at the adrres of j is %d \n meanwhile the address of j is itself %p",j,*j,&j);
    
    return 0;
}