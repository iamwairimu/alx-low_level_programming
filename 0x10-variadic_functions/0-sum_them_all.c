#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all parameters
 * @n: number of arguments
 * @...: variable number of arguments
 * Return: 0 or sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int j, sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (j = 0; j < n; j++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
