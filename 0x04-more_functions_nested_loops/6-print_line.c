#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of times to print '_'
 * Return: a straight line
 */

void print_line(int n)
{

	int ab;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else 
	{
		for ( ab = 1; ab <= n; ab++)
		{
			_putchar('_');
		}

		_putchar('\n');

	}

}
