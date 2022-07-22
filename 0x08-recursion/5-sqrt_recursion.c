#include<stdio.h>


/**
* power_operation - returns the natural square root of a number.
* we have to solve for the square root logic first before calling it in the recursion function
* @n: input number.
* @c: iterator.
* Return: square root or -1.
*/
int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{

		if (c * (n / c) == n)

			return (c);

		else

			return (-1);

	}
	return (0 + power_operation(n, c + 1));

}

/**
* _sqrt_recursion - this function returns the natural square root of a number.
* @n: input number.
* Return: natural square root.
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
        return (0);
	if (n == 1)
        return (1);

	return (power_operation(n, 2));
}
