#include <stdio.h>
#include "main.h"

/**
  *swap_int - swaps the values of two integers.
  *@a : first value
  *@b : second value
  *@c : swapped value memory address
  *Return: Always 0 (success)
  */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
