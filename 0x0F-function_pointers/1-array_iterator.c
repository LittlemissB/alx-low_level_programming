#include <stdlib.h>

/**
 * array_iterator - Executes  function given as aparameter
 * on each element of an array
 * @array: Array to iterate over
 * @action: Action to execute
 * @size: Size of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size > 0 && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
