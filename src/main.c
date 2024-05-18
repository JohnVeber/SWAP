/* swap.c*/
/* Current version v.3.1.4. */
/* Additional task: Add test_2.c which tested quantity function.*/

#include <stdio.h>
#include <stdlib.h> /* For atoi() usage. */
#include "swap_func.h"
#include "quantity_func.h"

int main (int argc, char *argv[]){
    struct pair data = {0, 0}; /* declaration the "data" as a variable of struct type\
     with "pair" descriptor.*/

    if (quantity(argc, argv, &data) == ERR_NOT_ENOUGH){
        printf("Error: Enter at least two arguments please and check their types ");
        printf("(only integer numbers are accepted).\nProgram finished.\n");
        return EXIT_FAILURE;
    }
    else if (quantity(argc, argv, &data) == ERR_TOO_MUCH){
        printf("Error: Too much amount of arguments.\n");
        printf("Program finished.\n");
        return EXIT_FAILURE;
    }
    
    printf("You entered %d and %d.\n", data.first, data.second);
    swap_i(&data.first, &data.second);

    printf("Values after swapping are:%d and %d\n\n", data.first, data.second);
    return 0;        
}

/* TODO */ 
/* Max and min possible supported values aren't found. */
/* Integers overflow isn't checked yet. */