#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Sum all parameter
 * @n: Number of argument
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
