#include<stdio.h>

int main() {
    char word[20]; // creating a string of 20 characters.

    printf("Enter a word... \n");

    fgets(word, 20 , stdin); // asks for user input for 20 characters for the variable 'word' (use fgets for characters for strings & scanf for other variable types)

    printf("Your word was: %s", word); //outputs it back to the user

    return 0;
}