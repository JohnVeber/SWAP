#include "swap_func.h"

void swap_i(int *pc, int *pd) // Function definition
{
    int t = *pc;
    *pc = *pd;
    *pd = t;
    return;
}