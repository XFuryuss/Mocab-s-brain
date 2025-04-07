// Brain for Mocab, coded and provided by XFuryus
#include <stdio.h>
#include <string.h>

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    
    // UI displays the current number of active brain cells in Mocab's brain.
    printf("Mocab's currently usning '0' brincels.\n");
    char brainStatus[10];
    printf("\nDo you want to turn on Mocab's brain? Allowed commands: y/n :D\n");
    printf("-> ");
    scanf("%9s", brainStatus);
    clearInputBuffer(); // Clear any leftover input

    // Function that manages Mocab's brain
    if (strcmp(brainStatus, "y") == 0 || strcmp(brainStatus, "Y") == 0) {
        int braincells;
        printf("\nHow many brincels to activate?\n");
        printf("-> ");

        if (scanf("%d", &braincells) != 1) {
            printf("\nError: I don't recognize that command. :(\n");
            clearInputBuffer(); // Discard the invalid input
        }
        else {
            if (braincells <= 0) {
                printf("\nWhat are you doing!? He already has '0' brincels pls. :(\n");
            }
            else if (braincells == 1) {
                printf("\nMocab's currently usning '1' brincel.\nMocab: Quack!\n");
            }
            else {
                printf("\nSori Mocab doesn't support using more than '1' brincel. ;(\n");
            }
        }
    }
    else if (strcmp(brainStatus, "n") == 0 || strcmp(brainStatus, "N") == 0) {
        printf("\nI see you like your Mocab vanilla. :)\n");
    }
    else {
        printf("\nError: I don't recognize that command. :(\n");
    }

    return 0;
}
