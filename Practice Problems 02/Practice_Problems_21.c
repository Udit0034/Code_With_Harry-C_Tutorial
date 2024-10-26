#include <stdio.h>

int main(){

    int a;

    scanf("%d",&a);

    int b = a%97;

    printf("The number %d is divisible by 97 only if the remainder is 0 \n And the remainder is  %d",a,b);

    return 0;
}
