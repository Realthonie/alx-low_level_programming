#include "main.h"

/**
 * swap_int - function to swap two ints
 * @a: first int
 * @b: second int
 *
 * RETURN: does not return a value
 */

void swap_int(int *a, int *b)
{
	int swap; /* Declaring a local variable 'swap' */

	swap = *b; /* Asssigning the value in the b variable to swap */
	*b = *a; /* Assigning the value in the a variable to b */
	*a = swap; /* Assigning the value in swap to a */
}
