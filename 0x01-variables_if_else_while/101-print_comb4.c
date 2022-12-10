#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0 (success)
 */
int main(void)
{
	int x = 48, y, z;

	while (x < 58)
	{
		y = x + 1;
		while (y < 58)
		{
			z = y + 1;
			while (z < 58)
			{
				if (y == z || x == z || x == y)
				{
					y++;
					z++;
					continue;
				}
				else
				{
					putchar(x);
					putchar(y);
					putchar(y);
					if ((x == 55) && (y == 56) && (z == 57))
					{
						putchar('\n');
						return (0);
					}
					else
					{
						putchar(',');

						putchar(' ');
					}
					z++;
				}
			}
			y++;
		}
		x++;
	}
	return (0);
}

