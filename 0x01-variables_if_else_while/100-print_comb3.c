#include <stdio.h>
/**
 * A program to print the numbers from 00 to 99, numbers
 * it mustbe seperated by a comma,
 * followed by a space
 * in ascending order.
 * return 0
 */

int main(void)
{

	int digit1, digit2;
	
	for (digit1 = 0; digit1 < 10; digit1++)
	{
	
	    for (digit2 = 0; digit2 < 10; digit2++
            {
	    	putchar((digit1 % 10) + '0');
		putchar((digit2 % 10) + '0');

		if (digit1 == 9 && digit2 == 9)
			continue;

		putchar(',');
		putchar(' ');
	    
	    }	    
	
	}

	putchar('\n');

	return (0);
}
