#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0 (SucSucce
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("Positive number = %ld\n", time(0));
printf("Negative number = %d\n", n);

return (0);
}
