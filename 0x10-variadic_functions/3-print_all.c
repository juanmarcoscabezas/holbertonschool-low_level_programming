#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints all
 * Description: This is a variadic function prints all
 * @format: Format of data
 * Return:
 */
void print_all(const char * const format, ...)
{
	va_list args_list;
	int i = 0;
	char op;

	va_start(args_list, format);
	while (*(format + i))
	{
		op = *(format + i);
		switch (op)
		{
			case 'c':
				printf("%c", va_arg(args_list, int));
				break;
			case 'i':
				printf("%d", va_arg(args_list, int));
				break;
			case 'f':
				printf("%f", va_arg(args_list, double));
				break;
			case 's':
				printf("%s", va_arg(args_list, char *));
				break;
		}
		i++;
		if ((op == 'c' || op == 'i' || op == 'f' || op == 's') && *(format + i))
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(args_list);
}
