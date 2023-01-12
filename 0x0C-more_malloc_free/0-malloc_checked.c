#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory to allocate
 * Return: pointer to allocated memory or normal process termination if error
 */

void *malloc_checked(unsigned int b)
{
void *a;

a = malloc(b);
if (a == NULL)
exit(98);
return (a);
}
