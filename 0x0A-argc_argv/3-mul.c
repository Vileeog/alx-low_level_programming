#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * _atoi - converts a string to an integer
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
int x, y;

if (argc < 3)
{
printf("Error\n");
return (1);
}

x = atoi(argv[1]);
y = atoi(argv[2]);

printf("%d\n", x * y);
return (0);
}
