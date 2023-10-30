#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string to copy
 * Return: pointer to new string, or NULL if str = NULL or insufficient memory
 */
char *_strdup(char *str)
{

char *newstr;
int i = 0, j = 0;

if (str == NULL)
	return (NULL);

while (str[i])
	i++;

newstr = malloc(sizeof(char) * (i + 1));

if (newstr == NULL)
	return (NULL);

while (j < i)
{
	newstr[j] = str[j];
	j++;
}

newstr[j] = '\0';

return (newstr);
}
