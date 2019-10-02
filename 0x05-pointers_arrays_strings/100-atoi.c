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
	int start = 0, number = 0, number_sign = 1;
	char digit; /*Variable to compare number characteres*/
	int digit_int; /*Variable to mult by pow*/
	int found_int = 0; /*variable that knows if the 1st int was found*/
	int s_is_digit; /*Variable to know if the next char is not int*/

	while (s[start] != '\0')
	{
		digit_int = 0;
		s_is_digit = 0;
		if (s[start] == '-')
			number_sign = number_sign * (-1);
		for (digit = '0'; digit <= '9'; digit++)
		{
			if (s[start] == digit)
			{
				found_int = 1;
				s_is_digit = 1;
				number = (number * 10 - digit_int);
				break;
			}
			digit_int++;
		}
		if (found_int == 1 && s_is_digit == 0)
			break;
		start++;
	}
	if ((number_sign > 0 && number < 0) || (number_sign < 0 && number > 0))
		return (number * -1);
	return (number);
}
