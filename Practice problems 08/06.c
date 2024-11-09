#include <stdio.h>
void modify(char *arr1, int len)
{
    char temp;
    for (int i = 0; arr1[i] != '\0'; i++)
    {
        temp = (char)((int)arr1[i] - 1);
        arr1[i] = temp;
    }
    arr1[len - 1] = '\0';
}

int main()
{
    char arr1[10];
    gets(arr1);
    modify(arr1, 10);
    puts(arr1);

    return 0;
}