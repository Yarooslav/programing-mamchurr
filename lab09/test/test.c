#include "lib.h"
#include <check.h>


START_TEST(test_fact)
{
	int fact(int num)
	{
		int f=1;
		if(num%2==0)
		{
			for(int i=2; i<=num; i+=2)
			{
				f*=i;
			}
		}
		else
		{
			for(int i=1; i<=num; i+=2)
			{
				f*=i;
			}
		}	return f;
	}

}
END_TEST
int main(void)
{
	Suite *s = suite_create("Programing");
	TCase *tc_core = tcase_create("Lab-09");
	tcase_add_test(tc_core, test_sum);
	/* test_sum - method we created */
	suite_add_tcase(s, tc_core);
	SRunner *sr = srunner_create(s);
	srunner_run_all(sr, CK_VERBOSE);
	int number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);
	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
