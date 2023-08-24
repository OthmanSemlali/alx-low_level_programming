#include "main.h"
/**
 * is_symbol - checks if character is a symbol
 * @c: character to be checked
 * Return: 1 if true, 0 if false
 *
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
int cap_next = 1;

while (s[i] != '\0')
{

if (cap_next && s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 32;
}
cap_next = is_symbol(s[i]);
i++;
}
return (s);
}
