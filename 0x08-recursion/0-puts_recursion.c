#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - print a string followed by a new line
 * @s: string to be printed
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s  !=  '\0')
	{
		_putchar(*s);
		_puts_recursionm(s = 1);
	}
	else
		_putchar('\n');
}
