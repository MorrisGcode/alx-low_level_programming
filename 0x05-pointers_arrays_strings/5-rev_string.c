#include <stdio.h>
#include "main.h"

/**
  *rev_string - function that reverses a string.
  *@s: parameter
  *Return : always 0 (success)
  */

void rev_string(char *s)
{
	int len, i = 0, j = len / 2;
	char c;

	for (len = 0; s[len] != '\0'; len++)
	{
		;
	}
	while (j--)
	{
		c = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = c;
		i++;
	}
}


