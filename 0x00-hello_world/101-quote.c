#include <stdio.h>

/**
 * main - Entry point of the program
 * This program prints the message
 * "and that piece of art is useful" - Dora Korpar,
 * 2015-10-19, followed by a new line,
 * to the standard output stream (stdout).
 * The message is written using the `fputs` function
 * from the <stdio.h> standard I/O library.
 * Return: Always 1 (indicating a specific exit status)
 */
int main(void)
{
fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
return (1);
}

