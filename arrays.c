#include<stdio.h>

int main(){
    int arrayOfNumbers[] = {1, 2, 3, 5, 6}; // creates an array of integers with indexes 0+

    printf("The first entry of the array is: %d \n", arrayOfNumbers[0]);

    arrayOfNumbers[0] = 20;

    printf("Now it is: %d", arrayOfNumbers[0]);
    
    return 0;
}