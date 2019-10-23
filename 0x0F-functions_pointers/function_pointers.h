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

/**
 * int_index - Searches for an integer
 * Description: This function searches for an integer
 * @array: Array to execute the given function
 * @size: Size of @array
 * @cmp: The given function to compare integers from @array
 * Return: Returns the index of the 1st element which the cmp
 * function does not return 0, if no element marches, return -1
 */
int int_index(int *array, int size, int (*cmp)(int));




#endif
