#include "main.h"

/**
 *  largest_number - return the largest of three numbers
 *  @a: first integer
 *  @b: second integer
 *  @c: third integer
 *  Return: largest number
 */

int largest_number(int a, int b, int c)
{

	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > c && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largesr = c;

	return (largest);
}
