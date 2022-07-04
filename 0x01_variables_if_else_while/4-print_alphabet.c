#include <stdio.h>

/**
 *  a program that prints the alphabet in lowercase, followed by a new line
* */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'Z'; letter++)
	{
	    if (letter != 'e' && letter != 'q')
	            putchar(letter);
        }

	putchar('\n');

	return (0);
}	
