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
	argc++;
	printf("%s\n", argv[0]);
	return (0);
}
