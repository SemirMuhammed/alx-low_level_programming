#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: Attributes of new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	if ((dog->name == name) && (dog->age == age) && (dog->owner == owner))
	{
		return (dog);
	}
	else
	{
		return (NULL);
	}
}
