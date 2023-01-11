#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */

int count_word(char *s)
{
int flag, c, n;
flag = 0;
n = 0;

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
char **mat, *tmp;
int i, j, k = 0, len = 0, words, c = 0, start, end;
if (str == NULL || *str == '\0')
return (NULL);
while (*(str + len))
len++;
words = count_word(str);
if (words == 0)
return (NULL);
mat = (char **) malloc(sizeof(char *) * (words + 1));
if (mat == NULL)
return (NULL);
for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
{
end = i;
tmp = (char *) malloc(sizeof(char) * (c + 1));
while (--k >= 0)
free(mat);
return (NULL);
}
for (j = 0; j < c; j++)
tmp[j] = str[start + j];
tmp[c] = '\0';
mat[k] = tmp;
k++;
c = 0;
}
}
else if (c == 0)
{
start = i;
c++;
}
else
c++;
}
mat[k] = NULL;
return (mat);
}
