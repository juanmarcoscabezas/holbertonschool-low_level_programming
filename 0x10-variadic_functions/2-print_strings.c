#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings
 * Description: This is a variadic function prints strings
 * @separator: Separator space between numbers
 * @n: Number of parameters
 * Return:
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args_list;
	unsigned int i;
	const char *s;

	if (n == 0)
		return;

	va_start(args_list, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args_list, const char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
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
