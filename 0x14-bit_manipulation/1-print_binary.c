#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int mask = 1;
int i = 0;

mask <<= 63;
for (i = 0; i < 64; i++)
{
if ((n & mask) == 0)
_putchar('0');
else
_putchar('1');
mask >>= 1;
}
}
