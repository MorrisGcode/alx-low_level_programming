#include "main.h"

/**
  *more_numbers - prints 10 times the numbers, from 0 to 14
  *Return: 0 (success)
  */

void more_numbers(void)
{
	int i;
	int j;

	i = 0;

	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + 48);
			}
			_putchar((j % 10) + 48);
		}

		_putchar('\n');
		i++;
	}
}
