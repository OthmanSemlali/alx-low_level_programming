#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum = 2772;
    char c;

    srand(time(NULL));
    while (sum > 126)
    {
        c = rand() % 126;
        sum -= c;
        putchar(c);
    }
    putchar(sum);

    return (0);
}
