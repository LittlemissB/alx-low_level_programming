#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer of an unsigned long int
 * @index: index of the bit
 * Return: 1 if itworked, -1 if it did not work
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;

	if (index > 63)
		return (-1);

	b = 1 << index;

	if (*n & b)
		*n ^= b;
	return (1);
}
