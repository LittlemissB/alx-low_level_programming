#include "main.h"

/**
 * get_endianness - Checks the Endianness
 * Return: 0 if big endian, 1 if little
 */
int get_endianness(void)
{
	int num;

	num = 1;
	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}
