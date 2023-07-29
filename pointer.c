#include<stdio.h>

void changeValue(int *number);

void swapNumber (int *n, int *n1) {

    int temp;
    temp = *n;
    *n = *n1;
    *n1 = temp;

}

void main () {
    int n1, n2;
    n1 = 52;
    n2 = 25;

    // changeValue(&nb);
    // swapNumber(&n1, &n2);
    // printf("n1->%d\t b2->%d\n", n1,n2);
    int nb;
    int *ptr;

    nb = 55;
    ptr = &nb;

    printf("%d %0.60f\n", *ptr, *(float *)ptr);

    

    

}

void changeValue(int *number) {

    *number = 1234;
}

