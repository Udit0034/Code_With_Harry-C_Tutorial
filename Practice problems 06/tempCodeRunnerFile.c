#include <stdio.h>

int value_change(int *j)
{
    int temp;
    temp = *j;
    *j = 10*temp;
    return *j; 

}
int main()
{
    int i;
    scanf("%d", &i);
    printf("%d\n", i);

    value_change(&i);
    printf("%d\n", i);
    return 0;
}