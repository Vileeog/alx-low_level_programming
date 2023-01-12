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
char **mat;
int i, j, k, l, words = 0, len = 0;

if (str == NULL || *str == '\0')
return (NULL);
words = count_word(str);
if (words == 1)
{
mat = (char **)malloc(2 * sizeof(char *));
mat[0] = str;
mat[1] = NULL;
return (mat);
}
mat = (char **)malloc(words *sizeof(char *));
if (mat == NULL)
return (NULL);
mat[words - 1] = NULL;
i = 0;
while (str[i])
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
{
for (j = 1; str[i + j] != '\0' && str[i + j + 1] != '\0'; j++)
;
j++;
mat[len] = (char *)malloc((j + 1) * sizeof(char));
j--;
if (mat[len] == NULL)
{
for (k = 0; k < len; k++)
free(mat[k]);
free(mat[len]);
free(mat);
return (NULL);
}
for (l = 0; l < j - 1; l++)
mat[len][l] = str[i + l];
mat[len][l] = '\0';
len++;
i += j;
}
else
i++;
}
return (mat);
}
