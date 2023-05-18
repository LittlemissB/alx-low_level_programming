#include "main.h"
#include  <string.h>

/**
 * _strchr - Function that locates character in a string
 * @s: String to search for @c character
 * @c: Character to search for
 * Return: POinter to the first occurance of @c character
 * or NULL if not found
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}

