#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the addition of two numbers
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc == 1)
{
printf("0\n");
return (0);
}
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) == 0)
{
printf("Error\n");
return (1);
}
}
for (i = 1; i < argc; i++)
{
sum += atoi(argv[i]);
}
}
printf("%d\n", sum);
return (0);
}
