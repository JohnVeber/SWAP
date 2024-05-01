// test_1.c 
// With this test, two values are passed into a function swap_i()\
 and output data compared with expected.

#include <stdio.h>
#include <assert.h>
#include "../src/swap_func.h"

void pair(void){
    int f = 10;
    int s = 20;
    swap_i(&f, &s);
    assert(f == 20 && s == 10);
    printf("Test 1 passed.\n");
}

int main(void){
    pair();
}
