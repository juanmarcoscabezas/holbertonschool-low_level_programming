#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description - This program prints the numbers from 1 to 100
 * if the number is multiple of 3 print Fizz, is the number is
 * multiple of 5 print Buzz. is the number is multiple of both
 * 3 and 5 print FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int start;

	for (start = 1; start <= 100; start++)
	{
		if (start % 3 == 0 && start % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (start % 3 == 0)
		{
			printf("Fizz");
		}
		else if (start % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", start);
		}
		if (start < 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
