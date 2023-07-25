#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @size: size of the array
 * @array: list with numbers
 */
void selection_sort(int *array, size_t size)
{
	size_t k, index;
	int tmp, swap, flag = 0;

	if (array == NULL)
		return;
	for (k = 0; k < size; k++)
	{
		tmp = k;
		flag = 0;
		for (index = k + 1; index < size; index++)
		{
			if (array[tmp] > array[index])
			{
				tmp = index;
				flag += 1;
			}
		}
		swap = array[k];
		array[k] = array[tmp];
		array[tmp] = swap;
		if (flag != 0)
			print_array(array, size);
	}
}
