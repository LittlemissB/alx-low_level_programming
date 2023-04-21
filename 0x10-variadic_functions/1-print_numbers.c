#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints all arguments
 * @seperator: String to seperate arguments
 * @n: Number of arguments
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i < (n - 1) && seperator)
			printf("%s", seperator);
	}
	printf("\n");

	va_end(args);
}
