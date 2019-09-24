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
	unsigned long int fibonacci = 1;
	unsigned long int last = 1;
	unsigned long int aux;

	for (start = 0; start < 100; start++)
	{
		if (start < 99)
			printf("%lu, ", fibonacci);
		else
			printf("%lu", fibonacci);

		aux = fibonacci;
		fibonacci = fibonacci + last;
		last = aux;
	}
	putchar('\n');
	return (0);
}
