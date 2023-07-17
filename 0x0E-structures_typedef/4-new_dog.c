#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
  * new_dog - creates a new struct of type dog
  * @name: struct parameter name
  * @age: struct parameter age
  * @owner: struct parameter owner
  * Return: returns pointer to buffer of datatype dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->name = malloc(strlen(name) + 1);
	newdog->owner = malloc(strlen(owner) + 1);

	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog->name);
		free(newdog->name);
		return (NULL);
	}

	strcpy(newdog->name, name);
	strcpy(newdog->owner, owner);
	newdog->age = age;

	return (newdog);
}
