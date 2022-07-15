#include <stdio.h>

/**
 * _strncat - is a function that concatenates two strings
 * it will use most n bytes from src
 *
 * @dest: The string to be concatenated on
 * @src: The string to be appended to dest
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0,  destlen = 0;

	while (dest[i++])
		destlen++;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[destlen++] = src[i];
	}

	return (dest);
}
