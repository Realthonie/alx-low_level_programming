#include "main.h"

/**
 * puts2 - function to print every other character
 * @str - parameter string
 * Return: returns 0
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i++])
	{j++; }
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
