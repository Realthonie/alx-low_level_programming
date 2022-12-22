#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: String argument passed
 * Return: String pointer.
 */
char *leet(char *str)
{
	int indx1 = 0, indx2;
	char l[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[indx1])
	{
		for (indx2 = 0; indx2 <= 7; indx2++)
		{
			if (str[indx1] == l[indx2] || str[indx1] - 32 == l[indx2])
				str[indx1] = indx2 + '0';
		}
		indx1++;
	}
	return (str);
}
