#include <stdio.h>

int main() {
    
    int number;
    scanf("%d",&number);
    
    printf("%d \n",number);
    
    
      switch (number)
        {
            case 1:
                   printf("Rose \n");
                   break;
            case 2:
                printf("Lily \n");
                break;
            case 3:
                printf("Deffodil \n");
            default:
                printf("Lotus");
        }
    
    
    
 
    return 0;
    }


