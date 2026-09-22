#include <stdio.h>

int main(){
    int x;
    int y;

    printf ("Enter number 1: ");
    scanf ("%d",&x);

    printf ("Enter number 2: ");
    scanf ("%d", &y);

    printf ("Sum of two numbers: %d\n", (x+y));
    printf ("Differcence between two numbers: %d\n", (x-y));
    printf ("Product of two numbers: %d\n", (x*y));
    printf ("Quotient of two numbers: %d\n", (x/y));

    return 0;

}