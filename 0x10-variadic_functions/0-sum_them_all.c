#include <stdarg.h>

/**
 * sum_them_all - Sum all its parameters
 * Description: This is a variadic function that sum all its
 * parameters
 * @n: Number of parameters
 * Return: The sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args_list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (sum);

	va_start(args_list, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args_list, int);
	}
	va_end(args_list);
	return (sum);
}
