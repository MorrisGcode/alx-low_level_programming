#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main = point of entry
  *Return : Always 0 (success)
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int ld;

	ld = n % 10;

	if (n > 5)
	{
		printf("last digit of %d is %d and is greater than 5", n, ld);
	}
	else if (n == 0)
	{
		printf("last digit of %d is %d and is zero", n, ld);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0", n, ld);
	}
	return (0);
}
