#include "dog.h"

/**
 * init_dog - Initializatio of dog´s
 * Description: This function initializes a dog
 * @d: Dog´s structure
 * @name: Dog´s name
 * @age: Dog´s age
 * @owner: DOg´s owner
 * Return:
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
