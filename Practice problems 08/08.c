#include <stdio.h>
int check(char *arr1, char match)
{
    int check = 0;
    for (int i = 0; arr1[i] != '\0' && check == 0; i++)
    {

        if (arr1[i] == match)
            check = 1;
    }
    if (check == 1)
    {
        return 1;
    }
    else
        return 0;
}

int main()
{
    char arr1[10], match;
    gets(arr1);
    scanf("%c", &match);

    if (check(arr1, match))
        printf("Found");
    else
        printf("Not Found");

    return 0;
}