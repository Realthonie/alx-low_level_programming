#include "main.h"

/**
 * rev_string - prints string in reverse
 * @s: the string parameter
 * Return: returns 0
 */

void rev_string(char *s)
{
	int length;
	int i;
	char z;

	length = 0;
	i = 0;
	while (s[i++])
	{length++; }

	for (i = length - 1; i >= length / 2; i--)
	{
		z = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = z;
	}
}
