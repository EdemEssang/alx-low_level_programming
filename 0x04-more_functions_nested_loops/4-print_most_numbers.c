
#include <stdio.h>>

/**
 Write a function that prints the numbers, from 0 to 9, followed by a new line.

Prototype: void print_most_numbers(void);
Do not print 2 and 4
You can only use _putchar twice in your code
  */
void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
		if (x == 2 || x == 4)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}

	_putchar('\n');
}