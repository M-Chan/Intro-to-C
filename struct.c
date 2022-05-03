#include<stdio.h>

// Creating the basic struct (like a 'template' / 'skeleton')
struct chessPiece {
    char *colour;
};

int main() {

    // Using the skeleton to build a white queen chess piece
    struct chessPiece whiteQueen;
    whiteQueen.colour = "white";
    
    printf("The chess piece is %s\n", whiteQueen.colour);
    return 0;
}