
#include <stdio.h>

/**
* swap_int - swaps  the values of a and b
* @a: first input
* @b: second input
*/

void swap_int(int *a, int *b)
{

		int n;


		n = *a;

		*a = *b;

		*b = n;
}
