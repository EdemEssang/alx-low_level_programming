#include <main.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
* malloc_checked - a function that allocates memory using malloc.
* @b: unsigned int


* Return: VOID Pointer
*/
void *malloc_checked(unsigned int b)
{
	void *pointer;
<<<<<<< HEAD

	pointer = malloc(b);
    
    if (pointer == NULL)
        exit(98);
        
=======
	
	pointer = malloc(b);
	
	if (pointer == NULL)
		exit(98);
	
>>>>>>> a71299ec4b63d5e5b6442faef72e3fd6382d5941
	return (pointer);
}
