#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: 0 (Success)
 */

int main(void)
{
long int i, j, k, z;

j = 1;

k = 2

for (i = 1; i <= 50; ++i)
{
if (j != 20365011074)
{
printf("%ld, ", j);
}
else
{
printf("%ld\n", j);
}
z = j + k;
j = k;
k = z;
}

return (0);
}
