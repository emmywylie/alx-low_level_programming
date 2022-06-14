#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: the string containing characters
 *
 */

void puts2(char *str)
{

	int i = 0, len = 0;

	while (str[i++])
		len++;

	for (i = 0; i < len; i += 2)
		putchar(str[i]);

	putchar('\n');

}
