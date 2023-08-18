#include "main.h"
/**
 * print_square -  prints a square,
 * followed by a new line.
 * @size: is the size of the square
 * If size is 0 or less, the function should print only a new line
 * Return: void
 *
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;
		for (i = 0; i < size; i++)
		{

			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
		}
	}


}
