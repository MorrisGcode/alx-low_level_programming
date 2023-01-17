#include "main.h"

/**
  *evaluate_num - recursion loop
  *@n: number
  *Return 1 or 0
  */

int evaluate_n(int n, int iterator)
{
	if (iterator == n - 1)
		return (10);

	else if (n % iterator == 0)
		return (0);

	else if (n % iterator != 0)
		return (evaluate_n(n, iterator + 1));

	return (0);
}

int is_prime_number(int n)
{
	int iterator;

	iterator = 2;

	if (n < 2)
		return (0);

	else if (n == 0)
		return (1);

	return (evaluate_n(n, iterator));
}


