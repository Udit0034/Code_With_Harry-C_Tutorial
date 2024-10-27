#include <stdio.h>
void design(int n)
{
    int i = 1;
    for (i; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
        }
        else
            printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    design(n);

    return 0;
}