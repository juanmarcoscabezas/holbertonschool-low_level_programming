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
	int aux2;

	for (aux = 0; aux < 100; aux++)
	{
		for (aux2 = 0; aux2 < 100; aux2++)
		{
			if (aux != aux2 && aux < aux2)
			{
				putchar(((aux / 10) % 10) + '0');
				putchar((aux % 10) + '0');
				putchar(' ');
				putchar(((aux2 / 10) % 10) + '0');
				putchar((aux2 % 10) + '0');
				putchar(',');
				putchar('\n');
			}
		}
	}
	putchar('\n');
	return (0);
}
