#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * This function print the alphabet a...z
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int aux;
	char auxC;

	for (aux = 0; aux < 10; aux++)
	{
		putchar((aux % 10) + '0');
	}

	for (auxC = 'a'; auxC <= 'f'; auxC++)
	{
		putchar(auxC);
	}
	putchar('\n');
	return (0);
}
