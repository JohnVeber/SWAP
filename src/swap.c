/* swap.c*/
// Current version v.3.1.0.
/* Task: Write a new function that returns a structure of two values.*/

#include <stdio.h>
#include <stdlib.h> // For atoi() usage
#include "swap_func.h"
#define OK 0 
#define ERR 1

struct pair {
    int first;
    int second;
};

int quantity(int argc, char *argv[], struct pair*data){ // New function with temporary stub
    data->first = 10;
    data->second = 200;
    return OK;
}

int main (int argc, char *argv[]){
    struct pair data = {0, 0};
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
    //a = atoi(argv[1]); // Use atoi to cast numbers in string form to their integer values.
    //b = atoi(argv[2]); 
}

// Bugs reported:

// Problems found: 
//Max and min possible supported values aren't found.
//Integers overflow isn't checked yet.
// A quantity() function is not implemented yet (temporary stub used).