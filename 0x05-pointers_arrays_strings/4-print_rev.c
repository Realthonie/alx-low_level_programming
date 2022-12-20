#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: parameter containing string
 * Return: void
 */

void print_rev(char *s)
{
	int count;
	int length;

	length = 0;
	while (s[length] != '\0')
		length++;
	for (count = 1; count <= length; count++)
	{
		_putchar(s[length - count]);
	}
	_putchar('\n');
}
