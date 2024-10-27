#include <stdio.h>
float convert(float temp)
{
float fertemp;
fertemp = (temp *9/5)+32;
return fertemp;

}
int main() {
    float temp;
    scanf("%f",&temp);
    printf("%.2f",convert(temp));
    return 0;
}