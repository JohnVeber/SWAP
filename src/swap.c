/* swap.c*/

// Current version v.2.0.1

/* Simple change change of project layout implemented*/

#include <stdio.h>
#include "swap_func.h"

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

// Bugs reported:
// Bug №1 No protection against integer overflow.

// Problems found:
//  №1 An ability to exit the program by pressing a preliminary key\
 (e.g. "q") is not implemented.