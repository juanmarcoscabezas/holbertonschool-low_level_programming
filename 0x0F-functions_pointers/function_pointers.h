#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * _putchar - putchar function
 *
 * Description: This function prints characters
 *
 * @c: is the entry character that has to be printed
 *
 * Return: void
 */
int _putchar(char c);

/**
 * print_name - Prints a name
 * Description: This function prints a given name
 * @name: Given name to print
 * @f: Given function that prints in a format
 * Return:
 */
void print_name(char *name, void (*f)(char *));

/**
 * array_iterator - Executes a given function
 * Description: This function executes a function fiven as a parameter
 * @array: Array to execute the given function
 * @size: Size of @array
 * @action: The given function to execute
 * Return:
 */
void array_iterator(int *array, size_t size, void (*action)(int));





#endif
