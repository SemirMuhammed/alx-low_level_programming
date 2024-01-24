#include "function_pointers.h"

/**
 * print_name - Points the name to the wanted funtions
 * @name: the name of user
 * @f: Function pointer
 *
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
    if (name && f)
    {
        f(name);
    }
}
