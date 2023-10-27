#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
int i, cents, coins = 0;
int value[5] = {25, 10, 5, 2, 1};

if (argc == 2)
{
cents = atoi(argv[1]);
if (cents > 0)
{
for (i = 0; i < 5; i++)
{
coins += cents / value[i];
cents = cents % value[i];
}
}
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", coins);
return (0);
}

