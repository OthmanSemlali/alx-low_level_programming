#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * This program generates a random integer using the rand() function
 * and then determines whether the generated number is positive,
 * negative, or zero. The program prints a message indicating the
 * nature of the generated number.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

    /* Seed the random number generator with current time */
srand(time(0));

    /* Generate a random number within a specific range */
n = rand() - RAND_MAX / 2;

    /* Determine and print the nature of the generated number */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}

/* Return 0 to indicate successful completion */
return (0);
}
