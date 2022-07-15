#include <stdio.h>

/** 
 * *_strcat - is a function that concatenate two strings, 
 * terminates the null byte.
 * @dest: The string to be concatenated.
 * @src: The source string to be appended to @dest
 *
 * Return: returns a pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, destlen = 0;

	while (dest[i++])
		destlen++;

	for (i = 0; src[index]; index++)
		dest[destlen++] = src[i];

	return (dest);



}
