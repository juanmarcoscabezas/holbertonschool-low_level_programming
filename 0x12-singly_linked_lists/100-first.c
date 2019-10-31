#include "lists.h"

void first(void) __attribute__ ((constructor));

/**
 * first - Inits before main
 * Description: This function starts before main
 * @void: Void param
 * Return: Always 0;
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
