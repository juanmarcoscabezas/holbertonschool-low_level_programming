#include "holberton.h"

/**
 * main - Entry point
 *
 * Description: This program prints the sum of all multiples
 * of 3 or 5 below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	int start;
	int sum = 0;

	for (start = 0; start < 1024; start++)
	{
		if ((start % 3 == 0) || (start % 5 == 0))
			sum = sum + start;
	}
	printf("%d\n", sum);
	return (0);
}
