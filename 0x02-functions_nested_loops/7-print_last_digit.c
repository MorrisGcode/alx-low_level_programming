#include "main.h"

/**
  *print_last_digit -prints last digits of a number
  *
  *Return : value of the last digits
  */

int print_last_digit(int n)
{
	int last_digit = n % 10;
	if (last_digit < 10)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
