/* swap.c*/
// Current version v.3.1.1.
/* Task: Write a new function that returns a structure of two values.*/

#include <stdio.h>
#include <stdlib.h> // For atoi() usage
#include "swap_func.h"
#define OK 0 
#define ERR 1

struct pair {  // declaration of structure template
    int first; // A field of structure
    int second;// A field of structure
};

int quantity(int argc, char *argv[], struct pair*data){ // New function
    data->first = atoi(argv[1]);
    data->second = atoi(argv[2]);
    return OK;
}

int main (int argc, char *argv[]){
    struct pair data = {0, 0}; //declaration the "data" as a variable of struct type\
     with "pair" descriptor.
    int ret = quantity(argc, argv, &data);

    if (ret == ERR){
        printf("Error: Unexpected amount of arguments.\n");
        printf("Program finished.\n");
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
//If you enter three arguments from the command line, an error is not handled.
//Entering only one value predictably results in a segmentation fault.

// Problems found: 
//Max and min possible supported values aren't found.
//Integers overflow isn't checked yet.