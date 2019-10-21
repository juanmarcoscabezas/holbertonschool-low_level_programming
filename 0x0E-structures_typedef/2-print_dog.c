#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Print dog´s
 * Description: This function prints a dog info
 * @d: Dog´s structure
 * Return:
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
