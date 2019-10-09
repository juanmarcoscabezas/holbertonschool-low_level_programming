#include "holberton.h"

int verify_prime(int n, int c)
{
	if (n == c)
		return (1);
	else if (n % c == 0)
		return (0);
	else
		return(verify_prime(n, c + 1));
}

/**
 * _is_prime_number - Knows if a number is prime
 * Description: This function knows if a number
 * is prime or not
 * @n: Number to know if it's prime
 * Return: 1 if @n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (verify_prime(n, 2));
}
