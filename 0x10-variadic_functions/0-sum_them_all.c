#include "variadic_functions.h"

/**
 * sum_them_all - Returns sum of its parameters
 *@n: Number of arguments passed
 *
 *Return: 0 if n == 0; else return sum of all args
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(nums, int);
		}
	}
	va_end(nums);

	return (sum);
}
