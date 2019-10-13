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
	int a;
	int b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);
	return (0);
}
