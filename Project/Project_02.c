#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    const char opt[3] = {'r', 'p', 's'};
    char choice[2];
    char com_choice;

    // Seed the random number generator
    srand(time(NULL));

    printf("Rock-Paper-Scissors Game\n");
    printf("Enter 'r' for Rock, 'p' for Paper, 's' for Scissors, or 'q' to quit.\n");

    while (1) {
        printf("\nEnter your choice: ");
        fgets(choice, sizeof(choice), stdin);

        // Remove newline character if present
        if (choice[strlen(choice) - 1] == '\n') {
            choice[strlen(choice) - 1] = '\0';
        }

        // Exit if the user enters 'q'
        if (choice[0] == 'q') {
            printf("Exiting the game. Goodbye!\n");
            break;
        }

        // Check for valid input
        if (choice[0] != 'r' && choice[0] != 'p' && choice[0] != 's') {
            printf("Invalid choice. Please enter 'r', 'p', 's', or 'q' to quit.\n");
            continue;
        }

        // Generate the computer's choice
        com_choice = opt[rand() % 3];

        // Display choices
        printf("You chose: %c, Computer chose: %c\n", choice[0], com_choice);

        // Determine and display game result
        if (choice[0] == com_choice) {
            printf("It's a Tie!\n");
        } else if ((choice[0] == 'r' && com_choice == 's') || 
                   (choice[0] == 'p' && com_choice == 'r') || 
                   (choice[0] == 's' && com_choice == 'p')) {
            printf("You Win!\n");
        } else {
            printf("You Lose!\n");
        }
    }

    return 0;
}
