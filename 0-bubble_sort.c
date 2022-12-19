#include "sort.h"
/**
 * bubble_sort - sorts a set of elements using the bubble method
 * @array: data to be sorted
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int sorted = 1, tmp = 0;

	if (!array || size < 2)
		return;

	while (size)
	{
		sorted = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				print_array(array, size);
				sorted = 1;
			}
		}
		if (!sorted)
			break;
	}
}
