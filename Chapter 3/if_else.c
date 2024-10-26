#include <stdio.h>

int main() {
    int age ;
    scanf("%d",&age);

    if(age>60){
        printf("You are a Senioer Citizen\n");
    }
    
    else if (age<18)
    {
        printf("You are a Children\n"); 
    }
    else
    {
        printf("Your are an Adult");
    }
    return 0;
}