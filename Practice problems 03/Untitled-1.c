// #include <stdio.h>

// int main() {

//     int a, b;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     if (a > 1) {
//         b = a * a;  // Assign b first
//         printf("%d", b);  // Then print b
//     } else {
//         printf("Number is less than 1");
//     }

//     return 0;
// }


#include <stdio.h>

int main() {

    int a ;

    printf("Enter a numbers: ");
    scanf("%d" ,&a);

    if (a > 1) 
  
        printf("%d", a*a);  
     else 
        printf("Number is less than 1");
    

    return 0;
}
