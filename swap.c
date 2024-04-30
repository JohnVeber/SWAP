/* swap.c*/

/* This program is the second attempt to realise swap function in C */
/* The function works for integers only at this version of program */
/* To achieve the goal of this programm pointers are used */

#include <stdio.h>

void swap_i (int *pc, int *pd); // Function declaration

int main (void)
{
    int a = 21;
    int b = 17;
    printf("Values before swapping were: a = %d, b = %d.\n", a, b);
    swap_i(&a, &b); // Function call
    printf("Values after swapping are: ");
    printf("a = %d, b = %d\n\n\n", a, b);
    return 0;
}
void swap_i(int *pc, int *pd) // Function definition
{
    int t = *pc;
    *pc = *pd;
    *pd = t;
    return;
}