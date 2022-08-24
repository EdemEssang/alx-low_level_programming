#include <stdio.h>
#include "main.h"
/**
*_isalpha - A function that checks for alphabetic character.
* @c: takes input from other functions.
*
*Return: 1 if c is a letter, lowercase or uppercase
*
*/
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);

}

