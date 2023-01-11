#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function to create an array
 * @size: the size of the array
 * @c: the array
 * Return: 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
char *r;
unsigned int i = 0;

if (size == 0)
return (NULL);

r = (char *) malloc(sizeof(char) * size);

if (r == NULL)
return (0);

while (i < size)
{
*(r + i) = c;
i++;
}

*(r + i) = '\0';

return (r);
}
