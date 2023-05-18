#include <string.h>

/**
 * _strpbrk - Locates multiple characters in a string
 * @s: First string
 * @accept: Second string
 * Return: Pointer to the byte in @s that matches the bytes in
 * accept or NULL if no match was found
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
