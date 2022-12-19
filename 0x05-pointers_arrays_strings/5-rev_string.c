#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
char ch;
int i, x, y;

x = 0;
y = 0;

while (s[x] != '\0')
{
x++;
}

y = x - 1;

for (i = 0; i < x / 2; i++)
{
ch = s[i];
s[i] = s[y];
s[y--] = ch;
}
}
