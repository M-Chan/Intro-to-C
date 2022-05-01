#include<stdio.h>

int main() {
    // The below is a loop that will print the numbers from 1 to 10 inclusive and state whether it is equal to 10
    for (int x = 1; x < 11; x++) {
        if (x==6) printf("The variable x is equal to 6 \n");
        else printf("The variable x is %d which is not equal to 6 \n", x);
    }
    
    // Empty line break
    printf("\n \n");


    // The below is a loop from 1 to 10 inclusive and only aloow values greater than or equal to 6 to be assigned to y or else y will be assigned the value of 0
    int y;
    for (int i = 1; i < 11; i++) {
        if (i>=6) y = i;
        else y = 0;
        printf("The variable y is equal to %d \n", y);
    }

    // Empty line break
    printf("\n \n");

    // Below will do the same thing as above but is a shorter way of coding
    for (int a = 1; a < 11; a++) {
        int b = (a>=6) ? a:0;
        printf("The variable b is equal to %d \n", b);
    }

    return 0;
}