#include <stdio.h>
#include <string.h>

int main() {
    int n;

    // Open the file in append mode
    FILE *ptr = fopen("data.txt", "a");
    if (ptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter the number of entries: ");
    scanf("%d", &n);
    getchar();  // Consume leftover newline from scanf

    char name[10];
    int salary;

    for (int i = 0; i < n; i++) {
        printf("Enter name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';  // Remove the newline character from fgets

        printf("Enter salary: ");
        scanf("%d", &salary);
        getchar();  // Consume leftover newline from scanf

        // Write name and salary to the file
        fprintf(ptr, "%s,%d\n", name, salary);
    }

    // Close the file
    fclose(ptr);

    return 0;
}
