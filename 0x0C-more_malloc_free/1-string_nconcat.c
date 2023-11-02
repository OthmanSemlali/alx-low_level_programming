#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate to s1
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (k = 0; s1[k] != '\0'; k++)
		;
	for (l = 0; s2[l] != '\0'; l++)
		;
	if (n >= l)
		n = l;
	str = malloc(sizeof(char) * (k + n + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}
