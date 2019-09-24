#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints the 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int start;
	int fibonacci = 1;
	int last = 1;
	int aux;

	for (start = 0; start < 50; start++)
	{
		if (start < 49)
			printf("%d, ", fibonacci);
		else
			printf("%d", fibonacci);

		aux = fibonacci;

		fibonacci = fibonacci + last;
		last = aux;
	}
	putchar('\n');
	return (0);
}
