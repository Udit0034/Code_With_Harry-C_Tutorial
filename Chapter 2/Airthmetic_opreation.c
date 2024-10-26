#include <stdio.h>

int main()
{
    // OPERATOR PRECEDENCE
    //             Priority Operators
    //             1 st * / %
    //             2nd + -
    //             3rd =
 // Associtivity is from left to right on same level 

    int a = 15;
    int b = 65;
    int c = 77;
    int d = 35;

    int expression = a*b/5+5*c*9/d+9;
// ((15*65)/5) + (((5*77)*9)/35) + 9
// 195 + 99 + 9
// 303


    printf("The result of a*b/5+5*c*9/d+8 is \n %d ",expression);
    return 0;
}