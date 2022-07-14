#include <stdio.h>

 /**
  *print_rev - a function that prints a string, in reverse
  *rcount: is to initially count to end
  *  n is to count back
  *
  * @s: str input
  *
  * Return: string in reverse
  */

void print_rev(char *s)
{
	int rcount = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		rcount++;
	
	}

	for (n = (rcount - 1); n >= 0; n--)
	{
		putchar9s[n]);
	}

	putchar('\n');
}
