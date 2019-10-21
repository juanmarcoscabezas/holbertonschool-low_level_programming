#ifndef STRUCTFILE
#define STRUCTFILE

/**
 * struct dog - Dog´s structure
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - Initializatio of dog´s
 * Description: This function initializes a dog
 * @d: Dog´s structure
 * @name: Dog´s name
 * @age: Dog´s age
 * @owner: DOg´s owner
 * Return:
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Print dog´s
 * Description: This function prints a dog info
 * @d: Dog´s structure
 * Return:
 */
void print_dog(struct dog *d);

typedef struct dog dog_t;

/**
 * new_dog - Creates a dog
 * Description: This function creates a dog
 * @name: Dog´s name
 * @age: Dog´s age
 * @owner: Dog´s owner
 * Return: A new dog
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees a dog
 * Description: This function frees a dog
 * @d: Dog´s structure
 * Return:
 */
void free_dog(dog_t *d);

#endif
