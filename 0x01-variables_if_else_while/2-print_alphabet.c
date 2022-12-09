#include <stdio.h>
/**
 * main -Entry
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int x = 0;

	while (x <= 25)
	{
		putchar(alphabet[x]);
		x++;
	}
	putchar('\n');
	return (0);
}
