#include "holberton.h"

/**
 * set_string - Sets the value of a pointer to a char
 * Description: This function sets the value of a pointer
 * to a char
 * @s: Pointer that cointains the value
 * @to: Pointer to chante value
 * Return:
 */
void set_string(char **s, char *to)
{
	*s = to;
}
