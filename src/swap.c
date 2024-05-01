/* swap.c*/

// Current version v.3.0.3

/* Task: Use command line arguments to enter swapped values*/

#include <stdio.h>
#include <stdlib.h> // For atoi() usage
#include "swap_func.h"


int main (int argc, char *argv[]){
    int a, b;

    if (argc == 3){
    a = atoi(argv[1]); // Use atoi to cast numbers in string form to their integer values.
    b = atoi(argv[2]); 
        printf("You entered %d and %d.\n", a, b);
        swap_i(&a, &b); // Function call

        printf("Values after swapping are: ");
        printf("a = %d, b = %d\n", a, b);
        return 0;        
        printf("\n\n");  
    }
    if (argc != 3){
        printf("Error: Unexpected amount of arguments.\n");
        printf("Program finished.\n");
    }

}

// Bugs reported:
//If only one number entered (argc == 2) segfault is observed.
//Bug fixed: Variable assignments have been moved inside "if" condition.

// Problems found: 
