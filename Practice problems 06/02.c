#include <stdio.h>
void variable_address(int j)
{
    printf("The address of variable j is%p\n", &j);
}
int main()
{
    int i;
    scanf("%d", &i);

    printf("The address of variable i is %p\n", &i);
    variable_address(i);
    return 0;
}