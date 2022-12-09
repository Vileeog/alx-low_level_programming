#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d ", n, n % 10);
if (n % 10 > 5)
printf("%d is greater than 5\n", n);
else if (n % 10 == 0)
printf("%d is equal to 0\n", n);
else if (n % 10 < 6)
printf("%d is less than 6\n", n);

return (0);
}
