/* quantity_func.h - this is a header file for quantity function. */

#ifndef QUANTITY_FUNC_H
#define QUANTITY_FUNC_H

#define OK 0 
#define ERR 1

struct pair {  /* Declaration of structure template. */
    int first; /* A field of structure. */
    int second; /* A field of structure. */
};

int quantity(int argc, char *argv[], struct pair*data); 

#endif

