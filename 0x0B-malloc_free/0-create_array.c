#include <stdlib.h>
#include "main.h"

/**
  *create_array - creates an array of char dynamically
  *@size: size of the array
  *@c: the string
  *Return: 0 means success except defined otherwise
  */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int postion;

	if (size == 0)
	{
		return (0);
	}
	/*Define values with malloc*/
	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (0);
	}
	else
	{
		postion = 0;
		while (postion < size)
		{
			*(buffer + postion) = c;
			postion++;
		}
		return (buffer);
	}
}
