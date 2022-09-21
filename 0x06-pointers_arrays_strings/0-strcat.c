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
	int a = 0, b;

	while (dest[a])
		a++;

	for (src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a += 1;
	}

	dest[a] = '\0';

	return (dest);
}
