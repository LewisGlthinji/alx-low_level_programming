#include "function_pointers.h"


/**
* array_iterator - a function given as
* a parameter on each element of an array.
* @array: array to execute func on
* @size: is the size of the array
* @action: is a pointer to the function you need to use
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t s;

	if (array && action)
	{
	s = 0;
	while (s < size)
	{
	action(array[s]);
	s++;
	}
	}
}
