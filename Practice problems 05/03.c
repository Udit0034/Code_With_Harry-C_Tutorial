#include <stdio.h>
float force(int m)
{
    float g = 9.8;
    return m*g;
}
int main() {
    int mass;
    scanf("%d",&mass);
    printf("The force of attraction by earth is %.2f",force(mass));

    
    return 0;
}