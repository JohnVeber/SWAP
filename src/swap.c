/* swap.c*/
// Current version v.3.1.4.
/* Additional task: Add test_2.c which tested quantity function.*/

#include <stdio.h>
#include <stdlib.h> // For atoi() usage
#include "swap_func.h"
#include "quantity_func.h"

int main (int argc, char *argv[]){
    struct pair data = {0, 0}; //declaration the "data" as a variable of struct type\
     with "pair" descriptor.
    int ret = quantity(argc, argv, &data);

    if (ret == ERR){
       //printf("Error: Unexpected amount of arguments.\n");
       //printf("Program finished.\n");
        return EXIT_FAILURE;
    }
    printf("You entered %d and %d.\n", data.first, data.second);
    swap_i(&data.first, &data.second); // Function call

    printf("Values after swapping are: ");
    printf("%d and %d\n", data.first, data.second);
    printf("\n\n");  
    return 0;        
}

// Bugs reported:

// Problems found: 
//Max and min possible supported values aren't found.
//Integers overflow isn't checked yet.