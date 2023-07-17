#include "dog.h"
/**
  * print_dog - prints the dog struct
  * @d: pointer to the dog struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)");

	else
		printf("Name: %s\n", d->name);

	if (d->age == -1)
		printf("Age: (nil)");

	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)");

	else
		printf("Owner: %s\n", d->owner);
}
