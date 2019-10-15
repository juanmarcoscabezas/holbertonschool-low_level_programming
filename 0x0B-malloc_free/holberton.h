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
 * create_array - Creates an array of chars
 * Description: This function creates an array of chars
 * and initializes it with a specific char
 * @size: Size of the array
 * @c: Char that gonna initialize @size
 * Return: A pointer to p, or NULL if it fails
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup - Creates a copy of a given string
 * Description: This function returns a pointer to a newly
 * allocated space in memory, witch contains a copy of the
 * string given as parameter
 * @str: String that we gonna copy
 * Return: A pointer to the new string, NULL if @str is NULL
 * or insufficient memory was available
 */
char *_strdup(char *str);

/**
 * str_concat - Concatenates two strings
 * Description: This function concatenates two strings
 * the returned pointer should point to a newly allocated
 * space sin memory witch contains the contents of @s1 and @s2
 * @s1: First string to concatenate
 * @s2: Second string to concatenate
 * Return: A pointer to the new string, NULL on failure
 */
char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - Creates a 2 dimensional array
 * Description: This function returns a pointer to a 2 dimensional
 * array of integers
 * @width: The width of the 2 dimensional array
 * @height: The Heigght of the 2 dimensional array
 * Return: A pointer to the 2 dimensional array, if width or height
 * is  or negative return NULL
 */
int **alloc_grid(int width, int height);

/**
 * free_grid - Frees a 2 dimensional array
 * Description: Frees memory of an array
 * @grid: Array that gonna be frees
 * @height: The Height of the 2 dimensional array
 * Return:
 */
void free_grid(int **grid, int height);

/**
 * argstostr - Concatenates all arguments of a program
 * Description: This function concatenates the arguments
 * of a program 
 * @ac: Arguments count
 * @av: The value of arguments
 * Return: A pointer to a string that contains the
 * concatenated string
 */
char *argstostr(int ac, char **av);

#endif
