#include<stdio.h>
/**
* factorial - this is a function that finds the factorial of *n
*
* @n: positive number
*
* Return: factorial of @n
*/
int factorial(int n)
{
	if (n < 0)		
		return (-1); /*return -1 if number is negative*/
	else if (n == 0)	
		return (1); 
	else			
		return (n * factorial(n - 1));
}
