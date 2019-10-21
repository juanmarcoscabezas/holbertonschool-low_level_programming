#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees a dog
 * Description: This function frees a dog
 * @d: Dog´s structure
 * Return:
 */
void free_dog(dog_t *d)
{
	dog_t *my_dog = d;

	if (d)
	{
		free(my_dog->name);
		free(my_dog->owner);
		free(my_dog);
	}
}
