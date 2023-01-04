#include "main.h"

/**
 * _print_rev_recursion - entry point
 * Description - function that prnts a string in reverse
 * @s: string character
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
