#include "main.h"

/**
  *print_line - prints a straight line
  *@n is the parameter
  *Return: 0 (success)
  */

void print_line(int n)
{
	int i = 1;

	while(i <= n)
	{
		_putchar(95);
		i++
	}

	_putchar('\n');
}
