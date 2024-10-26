#include <stdio.h>

int main() {
    int number1,number2,number3,number4;
    printf("Enter the first number ...  \n ");
    scanf("%d",&number1);

    printf("Enter the secound number ...  \n ");
    scanf("%d",&number2);

    printf("Enter the third number ...  \n ");
    scanf("%d",&number3);

    printf("Enter the fourth number ...  \n ");
    scanf("%d",&number4);

//    if (number1 > number2  && number1 > number3 && number1 > number4  )
//    {
//     printf("%d \n ",number1);
//    }
   
   //

   if (number1 > number2)
   {
         if (number2 > number3)
     {
                if (number3 > number4)
        {
             printf("%d \n ",number1);
        }
                else if (number3 < number4)
        {
        if (number4 > number2)
            {
                if (number1 < number4)
            {
               printf("%d \n ",number4);
            }
                else
                {printf("%d \n ",number1);
            }
            }
            
        }
        
     } 
   }
    else if (number2 < number3)
    {
        if (number3 > number4)
        {
            if (number1 < number3)
            {
               printf("%d \n ",number3);
            }
            else
            {printf("%d \n ",number1);
            }
        }
        else if (number3 < number4)
        {
            if (number1 < number4)
            {
               printf("%d \n ",number4);
            }
            else
            {
                printf("%d \n ",number1);
            }
            
        }
    }
    
    else if (number2 > number1)
    {
        if (number1>number3)
        {
            if (number3 > number4)
            {
                printf("%d \n ",number2);
            }
            else
            {
                if (number4 > number1)
                {
                    if (number4 > number2)
                    {
                        printf("%d \n ",number4);
                    }
                    else
                    {
                        printf("%d \n ",number2);
                    }
                    
                }
               else
               {
                 printf("%d \n ",number2);
               } 
            }
            //
        }


        
    }
    
   

   
    
    return 0;
}