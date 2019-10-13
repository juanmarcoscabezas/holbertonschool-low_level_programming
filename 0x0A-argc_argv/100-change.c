#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: This function prints the result
 * of the multiplocation
 * @argc: Number of params in argv
 * @argv: Parameters of the function
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int coin = 0, value = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	while (value > 0)
	{
		if (value - 25 >= 0)
		{
			value = value - 25;
		}
		else if (value - 10 >= 0)
		{
			value = value - 10;
		}
		else if (value - 5 >= 0)
		{
			value = value - 5;
		}
		else if (value - 2 >= 0)
		{
			value = value - 2;
		}
		else if (value - 1 >= 0)
		{
			value = value - 1;
		}
		coin++;
	}
	printf("%d\n", coin);
	return (0);
}
