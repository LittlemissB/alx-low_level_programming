#include <string.h>

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 *
 * Return: Pointer to the beginnjing of the located substring
 * or NULL if no match was found
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
