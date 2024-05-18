#include "quantity_func.h"
#include <stdio.h>
#include <stdlib.h> /* For atoi() usage. */

int quantity(int argc, char *argv[], struct pair*data){ 
    if(argc == 3){
        data->first = atoi(argv[1]);
        data->second = atoi(argv[2]);
        return OK;
    }
    else if(argc < 3){
        return ERR_NOT_ENOUGH;
    }
    else if(argc > 3){
        return ERR_TOO_MUCH;
    }
}
