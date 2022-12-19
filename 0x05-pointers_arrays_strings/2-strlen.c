#include <stdio.h>
#include "main.h"

/**
  *int _strlen - prints length of string
  *@s : parameter
  *Return : Always 0 (success)
  */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
