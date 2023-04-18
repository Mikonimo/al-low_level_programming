#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates  a new dog
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: owner of the dog
 *
 * Return: Pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;
	int name_len, owner_len, i;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	for (name_len = 0; name[name_len] != '\0'; name_len++)
		;
	name_len++;
	new_name = malloc(name_len * sizeof(char));
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		new_name[i] = name[i];

	for (owner_len = 0; owner[owner_len] != '\0'; owner_len++)
		;
	owner_len++;
	new_owner = malloc(owner_len * sizeof(char));
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i < owner_len; i++)
		new_owner[i] = owner[i];

	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}
