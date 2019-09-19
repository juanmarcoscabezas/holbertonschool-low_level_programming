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
	int aux3;

	for (aux = 0; aux < 10; aux++)
	{
		for (aux2 = 0; aux2 < 10; aux2++)
		{
			for (aux3 = 0; aux3 < 10; aux3++)
			{
				if ((aux != aux2 && aux2 != aux3) && (aux < aux2 && aux2 < aux3))
				{
					putchar((aux % 10) + '0');
					putchar((aux2 % 10) + '0');
					putchar((aux3 % 10) + '0');
					if (aux != 7 || aux2 != 8 || aux3 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
