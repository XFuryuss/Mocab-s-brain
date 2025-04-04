// Brain for Mocab, coded and provided by XFuryus
#include <stdio.h>
#include <string.h>

int main(){

    // UI displays the current number of active brain cells in Mocab's brain.
    printf("Mocab's currently usning '0' brincels.\n");

    // UI displays if the user wants to turn on Mocab's brain.
    char brainStatus[60];
    printf("\nDo you want to turn on Mocab's brain? Allowed commands: y/n :D\n");
    printf("-> ");
    scanf("%59s", brainStatus);
    while (getchar() != '\n');

    // Function that manages the brain.
    if (strcmp(brainStatus, "y") == 0 || strcmp(brainStatus, "Y") == 0 || 
        strcmp(brainStatus, "Yes") == 0 || strcmp(brainStatus, "yes") == 0) {
        int braincells;
        printf("How many brincels do you wanna turn on?\n");
        printf("-> ");
        scanf("%d", &braincells);

        switch(braincells){
            case 0:
            printf("\nI see, you like your Mocab vanilla :3\n");
            break;
            case 1:
            printf("\nMocab's currently usning '%d' brincels.\n", braincells);
            printf("Mocab: Quack!\n");
            break;
            default:
            printf("\nError: Woah slow down! Mocab can't stand more than one brincels at the time. >:(\n"); // Error in case the user tries to turn on more than one brain cell.
            break;
        }
    } else if (strcmp(brainStatus, "n") == 0 || strcmp(brainStatus, "N") == 0 || 
               strcmp(brainStatus, "No") == 0 || strcmp(brainStatus, "no") == 0) {
        printf("\nI see, you like your Mocab vanilla :3\n");
    } else {
        printf("Error: What are you doing?????? I don't understand your command. :(\n"); // Erorr in case the user doesn't enter a valid command.
    }

    return 0;
}
