#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (success)
 */
int main(void)
{
	int x = 48;
	/*char alphabet[] = "0123456789";*/
	while (x < 58)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	/* putchar('$');*/
	putchar('\n');
	return (0);
}
