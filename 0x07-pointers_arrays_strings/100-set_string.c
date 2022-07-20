#include<stdio.h>

/**
* set_string - a function that sets the value of a pointer to char
* @s: the value to modify
* @to: the value to assign
*
*/
void set_string(char **s, char *to)
{
	*s = to;
}
