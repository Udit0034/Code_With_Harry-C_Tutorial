#include <stdio.h>

int main () {

    int radius;
    scanf("%d",&radius); 
    float area= 3.14*radius*radius;
    printf("The area of circle  is %f",area );
    
    float height ;
    scanf("%f",&height);
    printf("The volume  of cylinder  is %f", height*area);

    return 0;
}