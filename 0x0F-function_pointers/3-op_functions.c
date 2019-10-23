#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Adds two nums
 * Description - This function adds two numbers
 * @a: First argument
 * @b: Second argument
 * Return: (@a + @b)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subs two nums
 * Description - This function subs two numbers
 * @a: First argument
 * @b: Second argument
 * Return: (@a - @b)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two nums
 * Description - This function multiplies two numbers
 * @a: First argument
 * @b: Second argument
 * Return: (@a * @b)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two nums
 * Description - This function divide two numbers
 * @a: First argument
 * @b: Second argument
 * Return: (@a / @b)
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Module of two nums
 * Description - This function gives the module two numbers
 * @a: First argument
 * @b: Second argument
 * Return: (@a % @b)
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
