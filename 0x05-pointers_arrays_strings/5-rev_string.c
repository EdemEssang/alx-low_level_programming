#include <stdio.h>


/**
* rev_string - a function that reverses a string
* @s: input to reverse
*/

void rev_string(char *s)
{
	char rev = s[0];
	int revcounter = 0;
	int i;

	while (s[revcounter] != '\0')
		revcounter++;

	for (i = 0; i < revcounter; i++)
	{
		revcounter--;
		rev = s[i];
		s[i] = s[revcounter];
		s[revcounter] = rev;
	}

}
