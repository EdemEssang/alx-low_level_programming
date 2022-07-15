#include <stdio.h>

/**
 * puts2 - is a function that print only one character out of two
 * starting with the first one
 * @str: input
 *
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			putchar(str[i]);
		else
			continue;
	}
	putchar('\n');
}