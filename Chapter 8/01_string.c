#include <stdio.h>

int main()
{
    char s[6] = {'H', 'A', 'R', 'R', 'Y', '\0'};
    // There is another shortcut for initializing string in C language:
    char name[] = "HARRY"; // In this case C adds a null character automatically.



    // Priniting string 
    for (int i = 0; i < 6; i++)

    {
       printf("%c",s[i]);
    }
    
    return 0;
}