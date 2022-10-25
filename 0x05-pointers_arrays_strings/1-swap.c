#include "main.h"
/**
 * swap_int - swap the value of two integer
 * @a: First argument to be swapped
 * @b: Second argument to be swapped
 */
void swap_int(int *a, int *b)
{
	int q = *a;
	*a = *b;
	*b = q;
}
