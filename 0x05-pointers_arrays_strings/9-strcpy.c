#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating
 * null byte (\0)
 * @dest: pointer to the buffer in which we copy the string
 * @src: pointer to the string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
