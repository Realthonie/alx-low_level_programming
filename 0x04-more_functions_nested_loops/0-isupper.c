#include "main.h"

/**
 * _isupper - entry point
 * @c: character to check
 * Description: checks for uppercse character
 * Return: 1 if as an uppercase character, 0 in other case
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
