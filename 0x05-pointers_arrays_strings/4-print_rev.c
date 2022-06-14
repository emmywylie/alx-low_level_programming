#include "main.h"
#include <stdio.h>
#include <strings.h>
/**
 * print_rev - prints a string, in reverse
 * @s: string
 *
 */

void print_rev(char *s)
{
	int len = 0, i = 0;

	while (s[i++])
		len++;

	for (i = len - 1; i >= 0; i--)
		putchar(s[i]);

	putchar('\n');

}
