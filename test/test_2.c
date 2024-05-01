// test_2.c 
// Some values are passed into a function  quantity()\
 and output data compared with expected.

#include <stdio.h>
#include <assert.h>
#include "../src/quantity_func.h"

void assignment(void){
    int q = 3; // Number of arguments passed into main
    struct pair datacheck;
    char *arr[3] = {'a', 'd', 'x'};
    int s = 20;
    quantity(q, *arr, &datacheck);
    int fi = datacheck.first;
    int se = datacheck.second;
    assert((fi == 100) && (se == 120));
    printf("Test 2 passed.\n");
}

int main(void){
    assignment();
}
