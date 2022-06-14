#include "main.h"
#include <stdio.h>
#include <strings.h>

/**
 * _strcpy - copies a string pointed to by @src,
 * including the terminating null byte,
 * to a buffer pointed to by dest
 * @dest: a buffer to copy the string to
 * @src: a source string to copy
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}

	dest[index] = '\0';

	return (dest);

}
