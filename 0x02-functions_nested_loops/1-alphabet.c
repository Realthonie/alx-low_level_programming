#include "main.h"

/**
 * print_alphabet - Print lowercase letters
 * Description: function to print alphabets in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	_putchar('\n');
}
