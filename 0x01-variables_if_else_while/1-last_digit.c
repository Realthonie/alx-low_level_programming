#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n, last_n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_n = n % 10;
	if (last_n > 5)
		printf("Last didgit of %d is %d and is greater than 5\n", n, last_n);
	else if (last_n < 6 && last_n != 0)
		printf("Last didgit of %d is %d and is less than 6 and not 0\n", n, last_n);
	else
		printf("Last digit of %d is %d and is 0\n", n, last_n);
	return (0);
}
