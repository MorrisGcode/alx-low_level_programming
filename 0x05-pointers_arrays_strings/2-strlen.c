#include <stdio.h>
#include "main.h"

/**
  *int _strlen - prints length of string
  *@s : parameter
  *Return : Always 0 (success)
  */

int_strlen(char *s)
{
	int len;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
