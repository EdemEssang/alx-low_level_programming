#include <stdio.h>

/**
 *  *_memset - a function that fills the first
 *  n bytes ofthe memory area pointed to by s
 *  with the constantbyte b
 *  @s: memory area to fill
 *  @b: constant byte tofill
 *  @n: bytes of memory area filled
 *
 *  Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}	

	return (s);
}
