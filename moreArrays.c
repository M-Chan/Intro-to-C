#include<stdio.h>

int main(){
    // creating a 2d array (grid) of integers...
    int gridArray2d[4][3] = {{1, 2, 3},
                             {5, 7, 9}, 
                             {13, 14, 17},
                             {21, 39, 45}}; // 4 'main' entries in array due to [4][] & 3 in each entry due to [][3]

    printf("%d\n", gridArray2d[2][0]); // should be 13
    printf("%d\n", gridArray2d[3][2]); // should be 45
    
    return 0;
}