#include "main.h"

/**
  *is_prime_number -  returns 1 if the input integer is a prime number
  *evaluate_num - recursion loop
  *@x: number to iterate
  *@n: number
  *Return 1 or 0
  */

int evaluate_n(int n, int x)
{
	if (x == n - 1)
		return (10);

	else if (n % x == 0)
		return (0);

	else if (n % x != 0)
		return (evaluate_n(n, x + 1));

	return (0);
}

int is_prime_number(int n)
{
	int x;

	x= 2;

	if (n < 2)
		return (0);

	else if (n == 0)
		return (1);

	return (evaluate_n(n, x));
}


