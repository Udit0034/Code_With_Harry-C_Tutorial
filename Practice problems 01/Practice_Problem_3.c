#include <stdio.h>

int main () {

    int celsius;
    scanf("%d",&celsius); 
   int fahrenheit;
   fahrenheit = (celsius  * 9/5) + 32 ;
    printf("The temp in Fahrenheit is %d", fahrenheit);

    return 0;
}