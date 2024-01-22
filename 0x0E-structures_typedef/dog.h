#ifndef DOG_H
#define DOG_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - A structured variable of dog
 * @name: A pointer to a string of dog's name
 * @age: A floating value of dog's age
 * @owner: A pointer to a sting of dog's owner
 *
 * Description: 'A basic variable to structure dog attributes'
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef version of the struct dog variable
 * @name: A pointer to a string of dog's name
 * @age: A floating value of dog's age
 * @owner: A pointer to a sting of dog's owner
 *
 * Description: 'A basic variable to structure dog attributes'
 */
typedef struct
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
