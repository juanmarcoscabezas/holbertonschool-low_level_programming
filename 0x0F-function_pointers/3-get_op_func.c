#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - Gets operation
 * Description: This function receives the character for
 * the operation needed
 * @s: Operation needed
 * Return: The function needed
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i <= 5)
	{
		if (strcmp(ops[i].op, s) == 0)
			break;
		i++;
	}
	return (ops[i].f);
}
