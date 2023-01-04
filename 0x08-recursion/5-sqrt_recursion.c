#include "main.h"
/**
 * is_square_root - entry point
 * Description - A function that confirms the natural
 * square root of an input
 * *@num: the function accepts an input saved into num
 * *@squared: the function accepts an input saved into squared
 * Return: Success (integer)
 */
int is_square_root(int num, int squared)
{
	if ((squared * squared) == num)
	{
		return (squared);
	}
	else if (squared == num / 2)
	{
		return (-1);
	}
	return (is_square_root(num, squared + 1));
}
