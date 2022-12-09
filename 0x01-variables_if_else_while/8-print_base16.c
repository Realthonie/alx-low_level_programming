#include <stdio.h>
/**
 * main -Entry
 * Return: Always 0 (success)
 */
int main(void)
{
	int x = 0;
	char alphabet[] = "0123456789abcdef";

	while (x < 16)
	{

		putchar(alphabet[x]);
		x++;
	}
	putchar('\n');
	return (0);
}
