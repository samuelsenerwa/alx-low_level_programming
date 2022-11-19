#include "vardiac_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameter
 * @n: number of arguments passed to the function
 *
 * Return: the resulting sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
