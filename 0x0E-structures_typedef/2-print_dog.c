#include "dog.h"

/**
 * print_dog - Prints the nested variables of struct dog
 * @d: the struct name
 *
 * Return: Void
 */
void print_dog(struct dog *d)
{
	if ((d->name == NULL) && (d->age == '\0') && (d->owner == NULL))
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	if (d->age == '\0')
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
