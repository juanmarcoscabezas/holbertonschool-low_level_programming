#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * Description: This function prints the numbers from n to 98
 * @n: Start number of print
 * Return:
 */
void print_to_98(int n)
{
	int start = n;

	while (start != 98)
	{
		printf("%d", start);
		putchar(',');
		putchar(' ');
		if (n > 98)
			start--;
		else
			start++;
	}
	printf("98\n");
}
