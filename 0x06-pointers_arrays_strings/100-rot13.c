#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 * Return: encoded string
 *
 *
 */

char *rot13(char *s)
{
int i = 0;
int j = 0;
char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (s[i] != '\0')
{
j = 0;
while (letters[j] != '\0')
{
if (s[i] == letters[j])
{
s[i] = rot[j];
break;
}
j++;
}
i++;
}
return (s);
}
