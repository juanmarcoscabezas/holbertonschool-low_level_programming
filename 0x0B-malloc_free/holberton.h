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




#endif
