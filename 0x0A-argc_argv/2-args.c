#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: This function pritns all
 * arguments it receives
 * @argc: Number of params in argv
 * @argv: Parameters of the function
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
