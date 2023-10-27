#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication of two numbers
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int i, mul = 1;

if (argc == 3)
{
for (i = 1; i < argc; i++)
{
mul *= atoi(argv[i]);
}
}
else
{
printf("Error\n");
return (1);
}
printf("%d\n", mul);
return (0);
}
