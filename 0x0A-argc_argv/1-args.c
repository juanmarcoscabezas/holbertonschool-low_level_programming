#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: This function prints its name
 * @argc: Number of params in argv
 * @argv: Parameters of the function
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv++;
	return (0);
}
