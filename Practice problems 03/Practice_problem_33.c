#include <stdio.h>

int main() {
    int year;
    printf("Enter the year ...   ");
    scanf("%d",&year);

    if(year%4 == 0){
        printf("This is a leap year ");
    }
    else
    {
        printf("This isn't a leap year ");
    }
    
    return 0;
}