#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 * @s: string
 *
 */

void print_rev(char *s)
{
	while (*s)
	{
		putchar(*s++);
	}

	while (*s)
	{

		putchar(*s--);
	}

	putchar('\n');

}
