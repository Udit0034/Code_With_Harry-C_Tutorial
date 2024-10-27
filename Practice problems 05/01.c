#include <stdio.h>
float avg(int a, int b, int c);
float avg(int a, int b, int c)
{
    float avg = (a + b + c) / 3;
    return avg;
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("The average of numbers is %.2f", avg(a, b, c));

    return 0;
}