#include <check.h>
#include <stdlib.h>
#include "../src/sample/sample.h"

START_TEST(test_sum){
    ck_assert_int_eq(sum(1,2), 3);
}
END_TEST

Suite *brinkman_flow_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("BinkmanFlow");
  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_sum);
  suite_add_tcase(s, tc_core);

  return s;
}

int main(void) {
  int no_failed = 0;                   
  Suite *s;                            
  SRunner *runner;                     

  s = brinkman_flow_suite();                   
  runner = srunner_create(s);          

  srunner_run_all(runner, CK_NORMAL);  
  no_failed = srunner_ntests_failed(runner); 
  srunner_free(runner);

  return (no_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;  
}