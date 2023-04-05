#include "main.h"
#include <stdiio.h>

/**
 * factorial - returns the factorial of a given number
 * @n: number to return the factorial from
 * Return: factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1);
}
