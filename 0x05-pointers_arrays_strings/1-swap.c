
#include <stdio.h>

/**
* swap_int(int *a, int *b) - function that swap the values of a and b
* @a: first input
* @b: second input
* Return: 0
**/

void swap_int(int *a, int *b)
{

		int n;


		n = *a;

		*a = *b;

		*b = n;
}
