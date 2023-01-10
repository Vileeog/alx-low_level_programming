#include "main.h"

/**
 * *create_array - function to create an array
 * @size: the size of the array
 * @c: the array
 * Return: 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i = 0;

if (size == 0)
return (NULL);

arr = (char *) malloc(sizeof(char) * size);

if (arr == NULL)
return (0);

while (i < size)
{
*arr[i] = c;
i++;
}

*arr[i] = '\0';

return (arr);
}
