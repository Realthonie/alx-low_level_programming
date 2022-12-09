#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int x;
	int y = 0;

	for (x = 0; x < 2; x++)

	{
		while (y <= 25)
		{
			if (x == 0)
				putchar(alphabet[y]);
			else
				putchar(toupper(alphabet[y]));
			y++;
		}
		y = 0;
	}
	putchar('\n');
	return (0);
}
