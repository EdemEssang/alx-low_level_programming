#include<stdio.h>

/**
* _pow_recursion - function that returns the value 
* of x raised to the power of y which is x^y
* if y is lower than 0, the function should return -1
* @x: integer x
* @y: integer y
*
*
* Return: the power of @x by @y
*/
int _pow_recursion(int x, int y)
{
	int even;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y % 2 == 0)
	{
		even = _pow_recursion(x, y / 2);
		return (even * even);
    }
	else
		return (x * _pow_recursion(x, y - 1));
}

