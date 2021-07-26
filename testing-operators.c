/*
Testing the order of the addition/subtraction operators and incrementation/decrementation
*/

#include<stdio.h>

int main() {
    int x = 5;
    int y = 9;
    x++; // Adds 1 to x making it 6
    x += y--; // Adds y to x and THEN decrements y by 1 (so x is now 15 and y is now 8)
    printf("%d %d", x, y);
    return 0;
}
