#include <stdio.h>

int main()
{

    int subject_1, subject_2, subject_3;
    printf("Enter marks of sunject 1, 2, 3 respectivly.. \n");

    scanf("%d", &subject_1);
    scanf("%d", &subject_2);

    scanf("%d", &subject_3);

    if ((subject_1 < 33 || subject_2 < 33 || subject_3 < 33) || ((subject_1 + subject_2 + subject_3) / 3 < 40))
    {
        printf("You Fail");
    }

    else
    {

        printf("You Passed");
    }

    return 0;
}