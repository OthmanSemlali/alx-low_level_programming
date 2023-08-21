#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers,
 * followed by a new line.
 * @n:  the number of elements of the array to be printed
 * @a: array of integers
 * Return: void
 *
 *
 */

void print_array(int *a, int n)
{
int i = 0;

while (i < n)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
i++;
}
printf("\n");
}
