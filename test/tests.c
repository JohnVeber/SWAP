/* test_2.c */ 
/* Some values are passed into a function quantity()\
 and output data compared with expected. */

#include <stdio.h>
#include <assert.h>
#include "../src/quantity_func.h"
#include "../src/swap_func.h"

/* Test 1*/
void pair(void){
    int f = 10;
    int s = 20;
    swap_i(&f, &s);
    assert(f == 20 && s == 10);
    printf("Test 1 passed.\n");
}
/* Test 2*/
void assignment(void){
    struct pair datacheck = {0, 0};
    int argc = 3; /* Number of arguments passed into main. */

    char *argv[] = {"test_2.c", "1", "2"};
    int res_tst2;
    res_tst2 = quantity(argc, argv, &datacheck);
    assert(res_tst2 == OK);
    assert((datacheck.first == 1) && (datacheck.second == 2));
    printf("Test 2 passed.\n");
}

int main(void){
    pair();
    assignment();
}
