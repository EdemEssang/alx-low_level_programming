#include <std.h>

/**
 * A program that prints the alphabet in lowercase, and then in uppercase,  * followed by a new line.
 */

int main(void)
{

	char letter;

	for (letter = 'a'; letter <= 'Z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
