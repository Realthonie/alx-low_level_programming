#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0 (success)
 */
int main(void)
{	
	int x = 25;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	while (x >= 0)
	{
		putchar(alphabet[x]);
		x--;
	}
	putchar('\n');
	return (0);
}
