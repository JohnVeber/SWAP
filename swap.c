/* swap.c*/
/* Version v0.0.1*/
/* This program is the first attempt to realise swap function in C without pointers usage */
/* The function works for integers only at this version of program */

#include <stdio.h>

void swap_i (int, int); // Function declaration

int main (void)
{
    int a = 21;
    int b = 17;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap_i(a, b); // Function call
    printf("After swapping: a = %d, b = %d\n\n\n", a, b);
    return 0;
}
void swap_i(int c, int d) // Function definition
{
    int t = c;
    c = d;
    d = t;
    printf("Inside function swap_i: a = %d, b = %d\n", c, d);
}
/* The program output demonstrates passing arguments by value: 
variables at the "main" function were not swapped.*/
/* Target of the program wasn't achieved.*/