/* test_2.c */ 
/* Some values are passed into a function quantity()\
 and output data compared with expected. */

#include <stdio.h>
#include <assert.h>
#include "../src/quantity_func.h"
#include "../src/swap_func.h"
#include <stdlib.h> /* For atof() usage. */
#include <ctype.h> /* For isalpha() usage*/

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
    char *argv_bad[] = {"test_3.c"};
    int res_tst3;

    res_tst3 = quantity(argc_bad, argv_bad, &datacheck_tst3);
    assert(res_tst3 == ERR_NOT_ENOUGH);
    printf("Test 3 passed.\n");
}

/* Test 4. Too much input param*/
void too_much_data(void){
    struct pair datacheck_tst4 = {0, 0};
    int argc_bad = 4;
    char *argv_bad[] = {"test_4.c", "1", "2", "3"};
    int res_tst4;

    res_tst4 = quantity(argc_bad, argv_bad, &datacheck_tst4);
    assert(res_tst4 == ERR_TOO_MUCH);
    printf("Test 4 passed.\n");
}

/* Test 5. Only one input param*/
void not_enough_data(void){
    struct pair datacheck_tst5 = {0, 0};
    int argc_bad = 2;
    char *argv_bad[] = {"test_5.c", "4"};
    int res_tst5;

    res_tst5 = quantity(argc_bad, argv_bad, &datacheck_tst5);
    assert(res_tst5 == ERR_NOT_ENOUGH);
    printf("Test 5 passed.\n");
}

/* Test 6. Char parameters 2 and 3 instead of int*/
void bad_data_type(void){
    struct pair datacheck_tst6 = {0, 1};
    int argc = 3;
    char *argv_chars[] = {"test_6.c", "R", "T"};
    int res_tst6;
    int numcheck = 0;

    res_tst6 = quantity(argc, argv_chars, &datacheck_tst6);
    assert(atoi(argv_chars[1]) != (int)datacheck_tst6.first || atoi(argv_chars[2]) != ((int)datacheck_tst6.second));
    //numcheck = ((isalpha(datacheck_tst6.first) == 0) || (isalpha(datacheck_tst6.second) == 0));
    //assert(numcheck == 0);
    //assert(res_tst6 == ERR_NOT_ENOUGH);
    //assert((datacheck_tst6.first == 300) && (datacheck_tst6.second == 301));
    printf("Test 6 passed.\n");
}

/* Test 7. Float parameters 2 and 3 instead of int (+tryind to avoid automatic type casting.)*/
void bad_data_type_2(void){
    struct pair datacheck_tst7 = {0, 0};
    int argc = 3;
    char *argv_chars[] = {"test_6.c", "300.5", "301.56"};
    int res_tst7;
    //int char_cnt_2 = 5;
    //int char_cnt_3 = 6;

    res_tst7 = quantity(argc, argv_chars, &datacheck_tst7);
    //assert(char_cnt_2 != (datacheck_tst7.first) || char_cnt_3 != strlen(datacheck_tst7.second));
    assert(atof(argv_chars[1]) != (float)datacheck_tst7.first || atof(argv_chars[2]) != (float)datacheck_tst7.second);
    printf("Test 7 passed.\n");
}

int main(void){
    pair();
    assignment();
    no_data();
    too_much_data();
    not_enough_data();
    //bad_data_type(); /* Test 6*/
    bad_data_type_2(); /* Test 7*/
}
