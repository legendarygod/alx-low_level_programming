#include "dog.h"

/**
 * init_dog - inis a variable of type struct dog
 * @d: struct dog
 * @age: dog's age
 * @name: name of the dog
 * @owner: owner of the dog
 *
 * Return: none
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
