#include <stdio.h>

struct date
{
    int day, month, year;
};

void compare(struct date d1, struct date d2)
{
    int d = 0, m = 0, y = 0; // Initialize difference variables

    // Calculate day difference
    if (d1.day > d2.day)
    {
        d = d1.day - d2.day;
    }
    else if (d1.day < d2.day)
        d = d2.day - d1.day;
    // Calculate month difference
    if (d1.month > d2.month)
    {
        m = d1.month - d2.month;
    }
    else if (d1.month < d2.month)
        m = d2.month - d1.month;

    // Calculate year difference
    if (d1.year > d2.year)
    {
        y = d1.year - d2.year;
    }
    else if (d1.year < d2.year)
        y = d2.year - d1.year;

    printf("The difference between these two dates is %d days, %d months, and %d years.\n", d, m, y);
}

int main()
{
    struct date d1, d2;

    // Input for first date
    printf("Enter the first date (day month year): ");
    scanf("%d %d %d", &d1.day, &d1.month, &d1.year);

    // Input for second date
    printf("Enter the second date (day month year): ");
    scanf("%d %d %d", &d2.day, &d2.month, &d2.year);

    // Compare the dates
    compare(d1, d2);

    return 0;
}
