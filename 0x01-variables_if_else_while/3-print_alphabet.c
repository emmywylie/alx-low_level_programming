#include <stdio.h>

/**
 * main - Prints alphabets in uppercase, and then in lowercase
 *
 * Return: always 0
 */

int main(void)
{
	char letter;

	for (letter ='a'; letter <='z'; letter++)
		putchar(letter);

	for (letter ='A'; letter <='Z'; letterr++)
		putchar(letter);

	putchar("\n");

	return (0);
}
