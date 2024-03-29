#include "main.h"
#include <stdio.h>

/**
  *_strlen_recursion - function that returns length of string
  *@s: pointer
  *Return: display of length of string(int)
  */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}
