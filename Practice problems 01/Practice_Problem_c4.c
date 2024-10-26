#include <stdio.h>

int main () {

    int principal;
    scanf("%d",&principal); 

    float rate;
    scanf("%f",&rate);

    int time;
    scanf("%d",&time);

    float SI;
    SI= (principal*rate*time)/100;
   


    printf("The SI is %f",SI );

    return 0;
}