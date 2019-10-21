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
 * malloc_checked - Alocates memory
 * Description: This function alocates memory using malloc
 * @b: How many space i need to alocate
 * Return: A pointer to the space allocated
 */
void *malloc_checked(unsigned int b);

/**
 * string_nconcat - Concatenates two strings
 * Description: This function concatenates two strings
 * the returned pointer should point to a newly allocated
 * space sin memory witch contains the contents of @s1 and @s2
 * @s1: First string to concatenate
 * @s2: Second string to concatenate
 * @n: How many characters from @s2 wanna copy
 * Return: A pointer to the new string, NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc - Alocates memory of an array
 * Description: This function alocates memory
 * of an array using malloc
 * @nmemb: How many space i need to alocate
 * @size: size of elements
 * Return: A pointer to the space allocated, or NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * array_range - Creates an array of int
 * Description: This function creates an array of integer
 * @min: Min valued of array
 * @max: Max value of array
 * Return: A pointer to the created array
 */
int *array_range(int min, int max);

/**
 * _realloc - Reallocates a memory block
 * Description: This function reallocates a memmory block
 * using malloc and free
 * @ptr: The pointer allocated
 * @old_size: Size in bytes of allocated space for @ptr
 * @new_size: New size in bytes for @ptr
 * Return: A pointer to the created array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);



#endif
