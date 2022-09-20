#include "main.h"
#include <string.h>
/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int n;

	for (; *s != '\0'; s++)
	{
		n += 1;
	}
	return (n);
}
