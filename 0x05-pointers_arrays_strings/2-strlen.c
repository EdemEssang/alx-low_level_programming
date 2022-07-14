#include <stdio.h>

/**
 * int_strlen - returns the length of a string
 * @s: char input
 *
 * Return: length of the input string
 */

int _strlen(char *s)
{

	int i = 1, total = 0;
	char sl = s[0];

	while (sl != '\0')
	{
		total++;
		sl = s[i++];
	}

	return (total);
}
