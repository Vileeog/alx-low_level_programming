#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */

int count_word(char *s)
{
int flag = 0, c, n = 0;

for (c = 0; s[c] != '\0'; c++)
{
if (s[c] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
n++;
}
}
return (n);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
int i, j, k, l, n = 0, wc = 0;
char **w;

if (str == NULL || *str == '\0')
return (NULL);
n = count_word(str);
if (n == 1)
return (NULL);
mat = (char **)malloc(n *sizeof(char *));
if (mat == NULL)
return (NULL);
mat[n - 1] = NULL;
i = 0;
while (str[i])
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
{
for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
;
j++;
mat[wc] = (char *)malloc(j *sizeof(char));
j--;
if (mar[wc] == NULL)
{
for (k = 0; k < wc; k++)
free(mat[k]);
free(mat[n - 1]);
free(mat);
return (NULL);
}
for (l = 0; l < j; l++)
mat[wc][l] = str[i + l];
mat[wc][l] = '\0';
wc++;
i += j;
}
else
i++;
}
return (mat);
}
