// quantity_func.h - this is a header file for quantity function

// Try to declare this structure template inside header

#ifndef QUANTITY_FUNC_H
#define QUANTITY_FUNC_H

#define OK 0 
#define ERR 1

struct pair {  // declaration of structure template
    int first; // A field of structure
    int second;// A field of structure
};

int quantity(int argc, char *argv[], struct pair*data); // Function declaration

#endif

