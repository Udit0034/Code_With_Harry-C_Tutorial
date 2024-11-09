#include <stdio.h>
int count(char *arr1, int len,char match)
{
    int count =0;
    for (int i = 0; arr1[i] != '\0'; i++)
    {
        if (arr1[i] == match)
        count++;
    }
    return count;
}

int main()
{
    char arr1[10],match;
    gets(arr1);
    scanf("%c",&match);
    
    printf("The character %c occur %d times in string %s",match,count(arr1,10,match),arr1);

    return 0;
}