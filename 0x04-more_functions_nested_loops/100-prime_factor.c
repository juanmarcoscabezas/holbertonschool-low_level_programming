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
	long int start;
	long int is_prime = 2;i
	int valid_prime;

	while (number > 1)
	{
		valid_prime = 1;

		for (start = 1; start <= is_prime; start++)
		{
			if (is_prime % start == 0 && start != 1 && start != is_prime)
			{
				valid_prime = 0;
			}
		}
		if ((valid_prime == 1) && (number % is_prime == 0))
		{
			last_prime = is_prime;
			number = number / is_prime;
			/* printf("\nGOTCHA %ld, now IM %ld \n", is_prime, number);*/
			is_prime = 2;
		}
		else
		{
			is_prime++;
		}

		if (number <= 1)
		{
			break;
		}
	}
	printf("%ld\n", last_prime);
	return (0);
}
