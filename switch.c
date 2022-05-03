// The following switch case is a simplified version of the one used in my JS Chess project but now just print statements in C

#include<stdio.h>

int main() {
    
    // Variables defined
    char pawnUpgrade;

    // Asking for user input
    printf("Choose a piece to upgrade to: 'r', 'k', 'b', 'q' \n");
    scanf("%c", &pawnUpgrade);

    // Switch case acting on user input
    switch(pawnUpgrade) {
        case 'r':
            printf("Upgraded to Rook");
            break;

        case 'k':
            printf("Upgraded to Knight");
            break;

        case 'b':
            printf("Upgraded to Bishop");
            break;

        case 'q':
            printf("Upgraded to Queen");
            break;
    
        default:
            printf("Invalid input - Upgraded to Queen");
            break;
    }
    return 0;
}