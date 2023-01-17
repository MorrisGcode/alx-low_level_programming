#include "main.h"
#include <stdio.h>

/**
  *factorial - function that returns factorial of a number
  *@n: integer
  *Return: integer for factorial number
  */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}

