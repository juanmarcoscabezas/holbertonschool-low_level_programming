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
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	printf("Last digit of %d is %d and is ", n, last);
	if (n == 0)
		printf("0\n");
	else if (n > 5)
		printf("greater than 5\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
