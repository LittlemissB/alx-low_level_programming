#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - add 2 positive numbers and print the result
 * @argc: argument count
 * @argv: array of argument
 * Description: if no number is passed to program, print o.
 * if one of the numbers contain non digits, print error.
 * Return: 1 if error, 0 if  function runs properly.
 */

int main(int argc, char const *argv[])
{
	int sum = 0, i = 1, j;

	while (i < argc)
	{
		int str_len = strlen(argv[i]);

		for (j = 0; j < str_len; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i++]);
	}
	printf("%d\n", sum);
	return (0);
}
