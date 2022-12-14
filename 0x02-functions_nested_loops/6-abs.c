#include "main.h"

/**
  *_abs - function that computes the absolute value of an integer
  *
  *Returns : always 0
  */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
