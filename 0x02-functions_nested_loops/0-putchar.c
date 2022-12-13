#include "main.h"

/**
 * main - Entry
 * Description: Program that prints putchar
 * Return: ALways 0 (Success)
 */
int main(void)
{
	char text[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++);
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
