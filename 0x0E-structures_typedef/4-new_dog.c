#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a dog
 * Description: This function creates a dog
 * @name: Dog´s name
 * @age: Dog´s age
 * @owner: Dog´s owner
 * Return: A new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *my_dog;
	char *name_cpy, *owner_cpy;
	int i = 0, j = 0;

	my_dog = malloc(sizeof(struct dog));
	if (my_dog == NULL)
		return (NULL);
	while (*(name + i) != '\0')
		i++;
	while (*(owner + j) != '\0')
		j++;
	name_cpy = malloc(sizeof(char) * i);
	owner_cpy = malloc(sizeof(char) * j);
	if (name_cpy == NULL || owner_cpy == NULL)
	{
		free(name_cpy);
		free(owner_cpy);
		return (NULL);
	}
	i = 0;
	j = 0;
	while (*(name + i) != '\0')
	{
		*(name_cpy + i) = *(name + i);
		i++;
	}
	while (*(owner + j) != '\0')
	{
		*(owner_cpy + j) = *(owner + j);
		j++;
	}
	my_dog->name = name_cpy;
	my_dog->age = age;
	my_dog->owner = owner_cpy;
	return (my_dog);
}
