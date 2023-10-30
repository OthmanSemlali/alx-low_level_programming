#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, k;

	i = j = k = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
		return (NULL);
	while (*s1)
		str[k++] = *s1++;
	while (*s2)
		str[k++] = *s2++;
	str[k] = '\0';
	return (str);
}
