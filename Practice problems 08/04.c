#include <stdio.h>
void copy(char *arr1, int len, char *arr2)
{
    for (int i = 0; i <= len; i++)
    {
        arr2[i] = arr1[i];
    }
}
int main()
{
    char arr1[10] = "hello bro", arr2[10];
    copy(arr1, 10, arr2);
    puts(arr2);

    return 0;
}