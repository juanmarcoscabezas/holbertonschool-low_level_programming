#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main -  Entry point
 * Description: This program is a calc
 * @argc: Number of arguments
 * @argv: Arguments passed
 * Return: 0 if an error does not occur, 98 if the number
 * of arguments iw wrong, 99 if the operator is different than
 * +, -, *, /, %.
 * 100 if the user tries to divide (/ or %) by 0
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int a, b, res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (!f)
	{
		printf("Error\n");
		exit(99);
	}
	res = f(a, b);
	printf("%d\n", res);

	return (0);
}
