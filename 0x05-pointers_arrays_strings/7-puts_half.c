#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to be printed
 * Return: void
 *
 *
 */

void puts_half(char *str)
{
	int i = 0;
	int len;

	while (str[i] != '\0')
	{
		i++;
	}

	len = i;

	if (i % 2 == 0)
	{
		i /= 2;
	}
	else
	{
		i = (i - 1) / 2;
	}

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
