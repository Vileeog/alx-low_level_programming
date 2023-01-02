#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
int n;

unsigned int sum1, sum2;

sum1 = 0;
sum2 = 0;

for (n = 0; n < size; n++)
{
sum1 += a[(size * n) + n];
sum2 += a[(size * (n + 1)) - (n + 1)];
}

printf("%d, %d\n", sum1, sum2);
}
