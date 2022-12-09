#include <stdio.h>
/**
 * main -Entry
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x = 48;
	/*char alphabet[] = "abcdefghijklmnopqrstuvwxyz";*/
	/**
	 * alphanumeric characters {a-z} {0-9} {special char}
	 * they start from {a-z} 65-90 nd 48-57
	 * {A-Z} 97-122
	 */
	while (x < 58)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
