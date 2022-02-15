#include "lib.h"
#include <check.h>

START_TEST(test_fact)

{
	int input = 5;
	int result = 15;
	int actual = fact(input);
	ck_assert_int_eq(result, actual);
}END_TEST

int main(void)

{
	Suite *s = suite_create("Programing");
	TCase *tc_core = tcase_create("Lab-09");
	tcase_add_test(tc_core, test_fact);
	/* test_sum - method we created */
	suite_add_tcase(s, tc_core);
	SRunner *sr = srunner_create(s);
	srunner_run_all(sr, CK_VERBOSE);
	int number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);
	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
