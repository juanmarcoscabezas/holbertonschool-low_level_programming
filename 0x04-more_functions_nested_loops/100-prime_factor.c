#include <stdio.h>

/**
 * main - Entry point
 * Description:
 * Return: Always 0
 */
int main(void)
{
	long int number = 612852475143;
	long int last_prime;
	long int start = 2;
	long int is_prime = 2;
	int valid_prime;

	while (number > 1)
	{
		valid_prime = 1;
		if (number % start == 0)
		{
			for (is_prime = 1; is_prime <= start; is_prime++)
			{
				if (start % is_prime == 0 && is_prime != 1 && is_prime != start)
				{
					valid_prime = 0;
				}
			}
			if ( valid_prime == 1)
			{
				number = number / start;
				last_prime = start;
				start = 1;
			}
		}
		start ++;
	}
	printf("%ld\n", last_prime);
	return (0);
}
