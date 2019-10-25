#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers
 * Description: This is a variadic function prints numbers
 * @separator: Separator space between numbers
 * @n: Number of parameters
 * Return:
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args_list;
	unsigned int i;

	if (n == 0)
		return;

	va_start(args_list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args_list, int));
		if (i < n - 1)
		{
			if (separator)
				printf("%s", separator);
		}
		else
			printf("\n");
	}
	va_end(args_list);
}
