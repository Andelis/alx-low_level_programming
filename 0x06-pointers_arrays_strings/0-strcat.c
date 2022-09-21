#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, b;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (src[b] != '\0'; b++)
	{
		dest[len] = src[b];
		len++
	}

	dest[a] = '\0';
	_putchar(dest);

	return (dest);
}
