#include "main.h"
#include <stdio.h>

int _check_prime(int, int i);

/**
 * is_prime_number - tells if an integer is a prime number or otherwise
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 if its not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_check_prime(n, n - 1));
}
/**
 * _check_prime -  calculates if a number is prime recursive
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 if n is a prime number, 0 if n is not
 */
int _check_prime(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0 && i > 0)
		return (0);

	return (_check_prime(n, i - 1));
}
