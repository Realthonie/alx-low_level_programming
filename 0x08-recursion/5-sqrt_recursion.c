#include "main.h"

/**
 * _sqrt_recursion - entry point
 * Description - function that returns the natural square root of a number
 * @n: the function accepts an input saved into n
 * Return: success (integer)
 */
int sqrt_recursion(int n)
{
	int squared = 0;
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (is_square_root(n, squared));
}
