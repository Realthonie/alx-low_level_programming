#include "main.h"

/**
 * _strlen_recursion - entry point
 * Description - function that returns the length of a string
 * @s: string to check
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
