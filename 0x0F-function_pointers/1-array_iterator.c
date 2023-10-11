#include "function_pointers.h"
#include <stdio.h>
/**
 * array_interator - prints each array element on a new line
 * @array: The array to iterate
 * @size: The number of elements in array
 * @action: A pointer to the function to be applied to each element
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
