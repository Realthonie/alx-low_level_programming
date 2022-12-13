#include "main.h"

/**
 * main -Entry
 * print_alphabet - Print lowercase letters
 * Description: alphabets in lowercase
 * Return: Always 0 (success)
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
