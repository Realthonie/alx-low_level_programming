#include "main.h"

/**
 * main - entry point
 * Description - Function that creates an array of chars and
 * initializes it with a specific character
 * @size: size of the array
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *p
		unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
