#include<stdio.h>

int variable1 = 5;

int main(){

    printf("Pointer: %p \n", &variable1); // variable 1 = 

    int *pVariable1 = &variable1;
    printf("Number: %d", *pVariable1);

    return 0;
}