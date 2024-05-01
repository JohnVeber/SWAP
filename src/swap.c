/* swap.c*/
// Current version v.3.1.2.
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
    if(argc == 3){
        data->first = atoi(argv[1]);
        data->second = atoi(argv[2]);
        return OK;
    }
    else if(argc < 3){
        printf("Error: Enter at least two arguments please.\n");
        printf("Program finished.\n");
        return ERR;
    }
    else if(argc > 3){
        printf("Error: Too much amount of arguments.\n");
        printf("Program finished.\n");
        return ERR;
    }
}

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