#include "main.h"

/**
 * is_symbol - Looking for punctuations
 * @c: character to check
 * Return: 1 if punctuation found, 0 Otherwise
 */

int is_symbol(char c)
{
switch (c)
{
case ' ':
case '\t':
case '\n':
case ',':
case ';':
case '.':
case '!':
case '?':
case '"':
case '(':
case ')':
case '{':
case '}':
return (1);
default:
return (0);
}
}

/**
 * cap_string - capitalizes all words of a string
 * @s: string to be capitalized
 * Return: capitalized string
 *
 *
 */
char *cap_string(char *s)
{
int i = 0;

while (s[i] != '\0')
{

if (is_symbol(s[i]))
{
if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] -= 32;
}
}
i++;
}
return (s);
}
