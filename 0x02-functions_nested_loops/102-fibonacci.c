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
	long int fibonacci = 1;
	long int last = 1;
	long int aux;

	for (start = 0; start < 50; start++)
	{
		if (start < 49)
			printf("%ld, ", fibonacci);
		else
			printf("%ld", fibonacci);

		aux = fibonacci;

		fibonacci = fibonacci + last;
		last = aux;
	}
	putchar('\n');
	return (0);
}
