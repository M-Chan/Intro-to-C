#include<stdio.h>

int number1, number2;

// creating a function called multiplier with two integer inputs
int multiplier(int a, int b){
    return a*b;
}

int main(){
    printf("Please enter a number: ");
    scanf("%d", &number1);
    printf("Please enter another number: ");
    scanf("%d", &number2);

    printf("The product of %d and %d is %d", number1, number2, multiplier(number1, number2)); // inputs the numbers to function
    return 0;
}
