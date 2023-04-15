#include <string.h>
/**
 * _strpbrk - locates multiples characters in a string
 *
 * @s: string to search for
 * @accept: input
 * Return: Pointer to the bytes in @s that matches the bytes in @accept
 * or NULL if no match was found
 *
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
