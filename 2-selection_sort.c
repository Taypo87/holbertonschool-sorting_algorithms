#include "sort.h"

/**
 * selection_sort - sorts a given list using selection sorting method
 * @array: array to be sorted
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, index = 0;
	int tmp = 0;

	if (size < 2)
		return;

	while (i < size - 1)
	{
		index = i;
		tmp = array[i];
		j = i + 1;
		while (j < size)
		{
			if (array[j] < tmp)
				tmp = array[j], index = j;
			j++;
		}
		if (index != i)
		{
			array[idex] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
		i++;
	}
}
