#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This program prints the lowercase alphabet from 'a' to 'z'  except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
if (i == 'q' || i == 'e')
{
continue;
}
putchar(i);
}
putchar('\n');
return (0);
}
