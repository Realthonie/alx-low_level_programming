#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: pointer to the string array for copying
 * @src: number of elements to extract
 *
 * Return: the dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + 1) != '\0')
	{
		*(dest + 1) = *(src + 1);
		i++;
	}
	*(dest + 1) = '\0';
	return (dest);
}
