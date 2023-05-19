#include <string.h>

/**
 * _strstr - Searches for needle in a haystack
 * @haystack: Entire string
 * @needle: Substring
 * Return: Pointer to the beginning of the located substring
 * or NULL if no match was found
 *
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
