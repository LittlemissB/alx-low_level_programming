#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry for the main program
 * @argc: The total number of arguments
 * @argv: Array of value of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num_of_bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_of_bytes = atoi(argv[1]);

	if (num_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < num_of_bytes; i++)
	{
		printf("%02hhx", arr[i]);
		if ((num_of_bytes - 1) == i)
			printf("\n");
		else
			printf(" ");
	}

	return (0);
}
