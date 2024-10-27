#include <stdio.h>
int fibbonachi_series(int n)
{
    if (n == 1)
        return 1;
    if (n == 0)
        return 0;
    else
        return fibbonachi_series(n - 1) + fibbonachi_series(n - 2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fibbonachi_series(n));

    return 0;
}