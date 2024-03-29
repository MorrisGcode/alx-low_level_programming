#include "dog_h"

/**
  *init_dog - function that initializes struct dog
  *@d: pointer to user defined data type
  *@name: pointer to dog's name
  *@age: pointer to dog's age
  *@owner: pointer to dog's owner
  *Return : 0
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
