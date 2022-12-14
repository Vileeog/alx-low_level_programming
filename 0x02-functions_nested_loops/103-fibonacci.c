#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms
 * followed by a new line
 * Return: 0 (Success)
 */

int main(void)
{
int i;
unsigned long int j, k, n, sum;

j = 1;
k = 2;
sum = 0;

for (i = 1; i <= 33; ++i)
{
if (j < 4000000 && (j % 2) == 0)
{
sum = sum + j;
}
n = j + k;
j = k;
k = n;
}

printf("%lu\n", sum);

return (0);
}
