#include <check.h>
#include "tmc-check.h"
#include "../src/tested.h"
#include <stdlib.h>


START_TEST(my_first)
{
    fail_unless(my_sum_function(1, 2) == 3, "My own sum function should sum 1 and 2 resulting in 3");
}
END_TEST

int main(int argc, const char* argv[])
{
    Suite *s = suite_create("Test suite");
    
    tmc_register_test(s, my_first_test, "1.1");
    
    return tmc_run_tests(argc, argv, s);
}
