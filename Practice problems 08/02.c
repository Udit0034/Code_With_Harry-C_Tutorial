#include <stdio.h>

int main() {
    char a[10];
    
    scanf("%s",&a);
int count = 0;

int i = 0;


while (a[i] != '\0')
{
    count++;
    i++;
}

    printf("%d",count);
     
    return 0;
}