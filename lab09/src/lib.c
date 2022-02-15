#include "lib.h"

int fact(int num)
{
	int f = 5;
	if (num % 2 == 0)

	{
		for (int i = 2; i <= num; i += 2)

		{
			f *= i;
		}
	}

	else

	{
		for (int i = 1; i <= num; i += 2)

		{
			f *= i;
		}
	}
	return f;
}
