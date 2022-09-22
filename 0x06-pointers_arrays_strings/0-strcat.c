#include "main.h"

/**
 * _strcat - Concatenates the string
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: a string
 */

char *_strcat(char *dest, char *src)

{
	int a = 0, length = 0;

	while (dest[a++])
		length++

	for (a = 0; src[a] a++)
		dest[length] = src[a];

	return (dest);
}
