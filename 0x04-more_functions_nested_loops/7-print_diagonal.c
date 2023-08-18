#include "main.h"
/**
 * print_diagonal -  draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed
 * If n is 0 or less, the function should only print a \n
 * Return: void
 *
 *
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			j = 0;

			while (j < i)
			{

				_putchar(' ');
				j++;

			}
			_putchar('/');
			_putchar('\n');
		}
	}
}
