#include <stdio.h>
/**
 * prime_factor -  finds and prints the largest
 * prime factor of the number 612852475143
 * followed by a new line.
 * Return: void
 * @num: num to check
 */
void prime_factor(long int num)
{
long int max = 2;
long int factor;
for (factor = 2; factor <= num; factor++)
{
while (num % factor == 0)
{
if (factor >= max)
{
max = factor;
}
num /= factor;
}
}
printf("%ld", max);
printf("\n");
}
/**
 * main - main func to execute prime factor
 * Return: void
 */
int main(void)
{
long int num = 612852475143;
prime_factor(num);
return (0);
}
