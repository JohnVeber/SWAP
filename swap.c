/* swap.c*/

// Current version v.1.0.2

/* This program is the third attempt to realise swap function in C */
/* To achieve the goal of this program pointers are used as well as in previous version*/
/* The function works for integers only at this version of program */

/*New feature: Implemented the ability to enter values, which need to be swapped.*/

#include <stdio.h>

void swap_i (int *pc, int *pd); // Function declaration

int main (void)
{
    int a, b;
    printf("Please, enter a pair of decimal unsigned numbers one by one.\n");
    printf("Use \"space\" button to divide input numbers.\n");
    printf("Use \"enter\" button to confirm input.\n");
    if (scanf("%d %d",&a, &b) == 2)
    {
        printf("Values before swapping were: a = %d, b = %d.\n", a, b);
        swap_i(&a, &b); // Function call
        printf("Values after swapping are: ");
        printf("a = %d, b = %d\n", a, b);
        return 0;        
    }
    else
    {
        printf("Program crash due to incorrect input. Restart the program please.");  
    }
}

void swap_i(int *pc, int *pd) // Function definition
{
    int t = *pc;
    *pc = *pd;
    *pd = t;
    return;
}

// Bugs reported:
// Bug №1 No protection against integer overflow.

// Problems found:
//  №1 An ability to exit the program by pressing a preliminary key\
 (e.g. "q") is not implemented.