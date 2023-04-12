#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - add 2 positive numbers and print the result
 * @argc: argument count
 * @argv: array of argument
 * Description: if no number is passed to program, print o.
 * if one of the numbers contain non digits, print error.
 * Return: 1 if error, 0 if  function runs properly.
 */

int main(int argc, char *argv[])
{
	int total, i;
	char *p;
	int num;

	total = 0;
	if (argc > 1)
	{
		for (i = 1; argv[1]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				total += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);
	return (0);
}
