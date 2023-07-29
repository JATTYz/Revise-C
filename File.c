#include<stdio.h>

int main() {

    FILE* fptr;

    fptr = fopen("newFile.txt", "w");

    fputs("I Love C Programming\n", fptr);
    fputs("C Programming is the best\n", fptr);
    fputs("That's right", fptr);
    
    fclose(fptr);
    return 0;
}