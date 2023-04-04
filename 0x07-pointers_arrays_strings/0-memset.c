#include "main.h"
#include <stdio.h>

/**
* *_memeset - fills memory area with constant byte
*@s: address to memory area
*@b: the char to be used
*@n: number of bytes to the memory area
*Return: the pointer to the memory
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; n > 0; i++, n--)
{
	s[i] = b;
}

return (s);
}
