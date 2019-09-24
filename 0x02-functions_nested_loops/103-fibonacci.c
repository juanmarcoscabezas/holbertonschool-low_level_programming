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
	long int fibonacci = 1;
	long int last = 1;
	long int aux;
	long int even = 0;

	while (fibonacci < 4000000)
	{
		aux = fibonacci;
		fibonacci = fibonacci + last;
		last = aux;
		if(fibonacci % 2 == 0)
		{
			even = even + fibonacci;
		}
	}
	printf("%ld\n", even);
	return (0);
}
