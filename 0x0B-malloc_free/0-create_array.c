#include "main.h"

/**
 * create_array - function to create an array
 * @size: the size of the array
 * @c: the array
 * Return: 0 (Success)
 */

char *create_array(unsigned int size, char c);
{
int i, n;

char* arr = (char*)malloc(n *sizeof(char));
if (arr == NULL)
{

puts("Error allocating memory");
return (NULL);
}
for (i = 0; i < n; i++)
{
arr[i] = '\0';
}
return (arr);
}
