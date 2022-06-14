#include "main.h"
#include <stdio.h>
#include <strings.h>

/**
 * _strlen - returns the length of a string
 * @str: string
 * Return: length
 */

size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
		len++;

	return (len);
}
