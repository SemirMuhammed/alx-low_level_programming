#include "dog.h"

/**
 * free_dog - frees the memory allocated by the dogs
 * @d: the dog struct name
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
	free(d);
}
