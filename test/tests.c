/* test_2.c */ 
/* Some values are passed into a function quantity()\
 and output data compared with expected. */

#include <stdio.h>
#include <assert.h>
#include "../src/quantity_func.h"
#include "../src/swap_func.h"

/* Test 1. Work of swap() with correct parameters. */
void pair(void){
    int f = 10;
    int s = 20;
    swap_i(&f, &s);
    assert(f == 20 && s == 10);
    printf("Test 1 passed.\n");
}
/* Test 2. Work of quantity() with correct parameters */
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
/* Test 3. No input param*/
void no_data(void){
    struct pair datacheck_tst3 = {0, 0};
    int argc_bad = 1;
    char *argv_bad[] = {"test_3.c", " ", " "};
    int res_tst3;

    res_tst3 = quantity(argc_bad, argv_bad, &datacheck_tst3);
    assert(res_tst3 == ERR);
    printf("Test 3 passed.\n");
}

/* Test 4. Too much input param*/
void too_much_data(void){
    struct pair datacheck_tst4 = {0, 0};
    int argc_bad = 4;
    char *argv_bad[] = {"test_4.c", " ", " ", " "};
    int res_tst4;

    res_tst4 = quantity(argc_bad, argv_bad, &datacheck_tst4);
    assert(res_tst4 == ERR);
    printf("Test 4 passed.\n");
}

/* Test 5. Only one input param*/
void not_enough_data(void){
    struct pair datacheck_tst5 = {0, 0};
    int argc_bad = 2;
    char *argv_bad[] = {"test_5.c", "4", "5"};
    int res_tst5;

    res_tst5 = quantity(argc_bad, argv_bad, &datacheck_tst5);
    assert(res_tst5 == ERR);
    printf("Test 5 passed.\n");
}

int main(void){
    pair();
    assignment();
    no_data();
    too_much_data();
    not_enough_data();
}
