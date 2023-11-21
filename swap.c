#include "stdio.h"
#include <stdlib.h>
#include "sort.h"

/**
* swap - swap two values in an array
* @a: first value of the array
* @b: second value of the array
*/

void swap(int *a, int *b)
{
	int *temp;

	temp = a;
	a = b;
	temp = b;
}
