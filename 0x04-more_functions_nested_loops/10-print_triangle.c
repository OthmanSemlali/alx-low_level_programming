#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size:  is the size of the triangle
 * If size is 0 or less, the function should print only a new line
 * Return: void
 *
 */
void print_triangle(int size)
{
    if (size <= 0)
    {
        _putchar('\n');
    }
    else
    {
        int spaces, c, i, j, k;
        
        for (i = size; i > 0; i--)
        {
            spaces = i - 1;
       
            c = size - spaces;
          

            for (j = 0; j < spaces; j++)
            {
                _putchar(' ');
            }
            for (k = 0; k < c; k++)
            {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
}
