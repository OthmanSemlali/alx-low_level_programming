#include <stdlib.h>
#include <time.h>
#include <stdio/h>
/* more headers goes there */
/**
 * main - Entry point of the program
 *
 * This program generates a random integer using the rand() function
 * and then extracts the last digit of the generated number using
 * the modulo operation. It then determines whether the extracted
 * last digit is greater than 5, equal to 0, or less than 6 but not 0.
 * The program prints a message indicating the properties of the last digit.
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int lastDigit = n % 10;
if (lastDigit > 5)
	printf("Last digit of %d is %d and is greater than 5", n, lastDigit);
else if (lastDigit == 0)
	printf("Last digit of %d is %d and is zero", n, lastDigit);
else if (lastDigit != 0 && lastDigit < 6)
	printf("Last digit of %d is %d and is less than 6 and not 0", n, lastDigit);
return (0);
}
