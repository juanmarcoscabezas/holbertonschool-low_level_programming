#include "holberton.h"
#include <stdio.h>

/**
 * _atoi - String to int
 * Description: This function convert from string to int
 * @s: Pointer that contains the numbers
 * Return: string to int
 */
int _atoi(char *s)
{
	int start = 0, number = 0, number_sign = 1, number_copy = 0, ten_pow = 1;
	int ten_pow_rev = 1; /*Variable to revert the number*/
	int digit_int; /*Variable to mult by pow*/
	int found_int = 0; /*variable that knows if the 1st int was found*/
	int s_is_digit; /*Variable to know if the next char is not int*/

	while (s[start] != '\0')
	{
		digit_int = 0;
		s_is_digit = 0;
		if (s[start] == '-')
			number_sign = number_sign * (-1);
		if (s[start] >= 48 && s[start] <= 57)
		{
			found_int = 1;
			s_is_digit = 1;
			number = number + (ten_pow * digit_int);
			ten_pow = ten_pow * 10;
		}
		digit_int++;
		if (found_int == 1 && s_is_digit == 0)
			break;
		start++;
	}
	number_copy = number;
	number = 0;
	ten_pow = ten_pow / 10;
	while (ten_pow >= 1)
	{
		number = number + ((number_copy / ten_pow) % 10) * ten_pow_rev;
		ten_pow = ten_pow / 10;
		ten_pow_rev = ten_pow_rev * 10;
	}
	return (number * number_sign);
}
