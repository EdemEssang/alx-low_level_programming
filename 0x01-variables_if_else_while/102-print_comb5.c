#include <stdio.h>
/**
 * Prints all possible combinations of two two-digit ybers,
 *
 * ranging from 0-99, separated by a comma followed by a space.
* let "y" represent the digits
*/
int main(void)
{

	int y1, y2;

	for (y1 =0; y1 <= 98; y1++)
	{
	
	   for(y2 = y1 + 1; y2 <= 99; y2++)
	   {
	   	putchar((y1 / 10) + '0');
		putchar((y1 % 10) + '0');
		putchar(' ');
		putchar((y2 / 10) + '0');
		putchar((y2 % 10) + '0');



	          
		if (y1 == 98 && y2 ==99)
		    continue;

		putchar(',');
		putchar(' ');
		  
	   
	   
	   }
	
	}
	
	putchar('\n');

	return (0);
}
