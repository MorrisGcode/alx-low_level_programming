#include <stdio.h>
#include "function_pointers.h"

/**
  *print_name - function that prints a name
  *@name: name of the person
  *@f : pointer
  *Return : none
  */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
