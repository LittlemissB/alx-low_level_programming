#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - tells if an integer is a prime number or otherwise
 * @n: number to evaluate
 * @c: iterator
 * Return: 1 if n is a prime number, 0 if its not
 */
int is_prime_number( int n, int c)
{
	{
		if (n <= c)
			return (1);
		else
			return (0);
	}
	return (is_prime_number(n,  1));
}
/**
 * is_prime_number - detects if an input is a prime number
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 if n is not
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime_number(n, 1));
}
