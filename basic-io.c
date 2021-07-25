// Basic input and output library (like <iostream> in C++) and allows for scanf, printf e.t.c.
#include<stdio.h>

// declares and initialises an integer and needs '%d' to be called
int number=0;

int main() {
    // Basic output (like cout in C++ with the '\n' like the endl)
    printf("Enter a number \n");

    // Basic input (like cin in C++) that asks for an integer
    // %d = integer and %f = float whose precision can be specified (e.g. %3.2f gives to 2dp and requires at least 3 characters)
    scanf("%d", &number);

    // Prints the number after addition and multiplication operations
    // The second part (after the comma) defines the integer called by %d
    printf("Your number plus 10 is %d \n", number + 10);
    printf("Your number multiplied by 10 is %d \n", number * 10);

    // Same thing to terminate the program at the end
    return 0;
}
