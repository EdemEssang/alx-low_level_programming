#include <stdio.h>

/**
 * Program to print the lowercase alphabet in reverse.
 */

int main(void)
{

	char letter;
	for (letter = 'Z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');

	return (0);

}
