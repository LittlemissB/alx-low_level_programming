#include <stdio.h>

/**
 * int_index - Searches for an integer via cmp function
 * @array: Array to search in
 * @size: Size of the array
 * @cmp: Pointer to the comparing function
 * Return: Index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
