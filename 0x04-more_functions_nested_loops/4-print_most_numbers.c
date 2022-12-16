#include "main"

/**
  *prints_most_numbers - excludes 2 and 4
  *Retuns: 0 (success)
  */

void prints_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i !=50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
