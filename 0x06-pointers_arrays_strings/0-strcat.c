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
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
	{
		putchar(dest);
		a++;
	}

	for (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	dest[a] = '\0';

	return (dest);
}
