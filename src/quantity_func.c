#include "quantity_func.h"

int quantity(int argc, char *argv[], struct pair*data){ // Function definition
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