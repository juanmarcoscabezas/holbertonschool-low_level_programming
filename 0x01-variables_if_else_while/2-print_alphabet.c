#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * This function print the last digit of the variable "n"
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char start = 'z';
	char aux;

	for (aux = 'a'; aux <= start; aux++)
	{
		putchar(aux);
	}
	putchar('\n');
	return (0);
}
