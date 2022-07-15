#include <stdio.h>

/**
 * *_strcat - a function that concatenates two strings
 * overwrite the terminating null byte (\0) at the end of @dest
 * adds a terminating null byte
 *
 * @dest: result of string to be modified
 * @src: string to be appended
 *
 * Return: pointer to the resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int i = o, len = 0;

	while (dest[index++])
		len++;

	for (i = 0; src[i]; i++)
		dest[len++] =src[i];

        return (dest);

}
