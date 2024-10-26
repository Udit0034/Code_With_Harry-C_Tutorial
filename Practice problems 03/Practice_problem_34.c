#include <stdio.h>

int main() {
    char character;  
    printf("Enter a character: ");
    scanf("%c", &character);

    
    if (character >= 'A' && character <= 'Z') {
        printf("This is an uppercase character.\n");
    }
   
    else if (character >= 'a' && character <= 'z') {
        printf("This is a lowercase character.\n");
    }
    else {
        printf("This is not an alphabetic character.\n");
    }

    return 0;
}
