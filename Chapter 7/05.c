#include <stdio.h>

int main(void) {
    int marks[2][3] = {
        {85, 90, 95},
        {88, 92, 96}
    };

    // Display the marks and their addresses
    printf("Student Marks and their Addresses:\n");
    for (int i = 0; i < 2; i++) {            // For each student
        for (int j = 0; j < 3; j++) {        // For each subject
            printf("marks[%d][%d] = %d at address %lu\n", 
                   i, j, marks[i][j],&marks[i][j]);
        }
    }

    return 0;
}
