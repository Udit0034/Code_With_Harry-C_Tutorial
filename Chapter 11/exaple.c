#include <stdio.h>
#include <stdlib.h>

int main() {
    int initialSize = 2;  // Start with space for 2 contacts
    char **contacts = (char **)malloc(initialSize * sizeof(char *));
    int currentSize = initialSize;
    int contactCount = 0;

    for (int i = 0; i < 6; i++) {  // Simulating adding 5 contacts
        if (contactCount >= currentSize) {
            // Increase size by 2 more slots
            currentSize += 2;
            contacts = (char **)realloc(contacts, currentSize * sizeof(char *));
        }
        contacts[contactCount] = "New Contact";  // Simplified: pretend we're adding names here
        contactCount++;
    }

    printf("Total contacts stored: %d\n", contactCount);
    free(contacts);  // Free the allocated memory
    return 0;
}
