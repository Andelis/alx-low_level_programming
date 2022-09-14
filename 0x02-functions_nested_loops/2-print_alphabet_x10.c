#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet x10
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int alphabet;
	int alphabet2;

	for (alphabet = 0; alphabet <= 9; alphabet++)
	{
		for (alphabet2 = 'a'; alphabet <= 'z'; alphabet2++)
		{
			_putchar(alphabet2);
		}
		_putchar(alphabet);
	}
}
