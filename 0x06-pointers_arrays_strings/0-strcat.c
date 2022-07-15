#include <stdio.h>

/**
 * _strcat - a function that concatenates two strings
 *
 * @dest: result of string to be modified
 * @src: string to be appended
 *
 * Return: pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int srclen; /* string length for src */
	int destlen; /*string length for dest */
	int i;

	srclen = 0;
	destlen = 0;

	while (src[srclen] != '\0')
		srclen++;

	while (dest[destlen] != '\0')
		destlen++;


	for (i = 0; i <= srclen; i++)
	{
		dest[destlen] = src[i];
		destlen2++;
	}
                   return (dest);

}
