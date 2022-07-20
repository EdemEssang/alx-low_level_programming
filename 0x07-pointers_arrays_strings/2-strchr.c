#include <stdio.h>

/**
* _strchr - function to locate character in string
* @s: source string
* @c: character to find
* Return: the string from character found
*/

char *_strchr(char *s, char c)
{
	int i = 0, n;

	while (s[i])
	{
		i++;
	}


	for (n = 0; n <= i; n++)
	{
		if (c == s[n])
	        {

			s += n;
			return (s);
															}		
	}

	return ('\0');

}
