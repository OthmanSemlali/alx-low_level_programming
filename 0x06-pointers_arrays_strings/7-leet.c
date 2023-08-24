#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: encoded string
 */

char *leet(char *s)
{
int i = 0;
int j = 0;
char *letters = "aAeEoOtTlL";
char *numbers = "4433007711";

while (s[i] != '\0')
{
j = 0;

while (letters[j] != '\0')
{
if (s[i] == letters[j])
{
s[i] = numbers[j];
}
j++;
}
i++;
}
return (s);
}
