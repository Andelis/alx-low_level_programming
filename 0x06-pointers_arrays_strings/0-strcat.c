#include "main.h"

/**
 * _strcat - Concatenates string
 * @dest: first parameter
 * @src: second parameter
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int length = 0, a;

	while (dest[length])
		length++

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[length] = src[a];
		length += 1;
	}
	dest[length] = '\0';
	return (dest);
