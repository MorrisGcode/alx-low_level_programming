#include <stdio.h>
#include "function_pointers.h"

/**
  *array_iterator - calls a function to act as array elements
  *@array: Name of the array
  * @size: size of the passed array to function
  * @action: the function that acts on the array elements
  * Return: VOID
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
