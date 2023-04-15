#include <string.h>
/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if equal, -ASCII  of the different character
 * if s1 ASCII is less the s2 ACII and +ASCII
 * if s2 ASCII is less the s1 ASCII
 */
int _strcmp(char *s1, char *s2)
{
	return (strcmp(s1, s2));
}
