#include "stdio.h"
#include <stdlib.h>
#include "sort.h"

/**
* bubble_sort - sort an array using bubble sort
* @array: array to be sorted
* @size: array size
*/
void bubble_sort(int *array, size_t size)
{
	size_t step, i, temp;
	int swapped;

	swapped = 0;

	for (step = 0; step < size - 1; step++)
	{
		for (i = 0; i < size - step - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				swapped = 1;
			}
		}
		if (swapped == 0)
		{
			break;
		}
	}
}
