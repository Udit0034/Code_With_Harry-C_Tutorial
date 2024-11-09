#include <stdio.h>
#include <string.h> // This library contains standard functions for string manipulation

int main() {
    // strlen example
    char st[30] = "hello world";
    int length = strlen(st); // Calculates the length of the string `st`, excluding the null character `\0`
    printf("Length of '%s': %d\n", st, length);
 printf("After strcat, s1 contains: %s\n");
    // strcpy example
    char source[] = "harry";
    char target[30];
    strcpy(target, source); // Copies the content of `source` into `target`
    printf("After strcpy, target contains: %s\n", target);

    // strcat example
    char s1[30] = "hello ";
    char s2[] = "world";
    strcat(s1, s2); // Concatenates `s2` to the end of `s1`, with no space between them
    printf("After strcat, s1 contains: %s\n", s1);

    // strcmp examples
    printf("strcmp(\"far\", \"far\"): %d\n", strcmp("far", "far"));   // Expected output: 0 (strings are equal)
    printf("strcmp(\"far\", \"joke\"): %d\n", strcmp("far", "joke")); // Expected output: Negative value (because "far" < "joke")
    printf("strcmp(\"joke\", \"far\"): %d\n", strcmp("joke", "far")); // Expected output: Positive value (because "joke" > "far")

    return 0;
}
