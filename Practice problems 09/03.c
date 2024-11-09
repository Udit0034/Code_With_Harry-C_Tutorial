#include <stdio.h>
 typedef struct complex
{
    float real;
    int img;
}com;
void show(struct complex c1)
{
    printf("%.2f%d\n", c1.real, c1.img);
}
int main()
{
    com number[5];
    for (int i = 0; i < 5; i++)
    {   float x;
        int y;
        printf("Enter the real value\n");
        scanf("%f", &x);
        printf("Enter the imaginary value\n");
        scanf("%d", &y);
        number[i].real = x;
        number[i].img = y;
    }
    for (int i = 0; i < 5; i++)
    {
        show(number[i]);
    }

    return 0;
}