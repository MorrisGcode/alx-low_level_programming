#include "main.h"

/**
  *_strlen - count size of array
  *@s : array of elements
  *Returns NULL if str = NULL
  */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
  *strcopy - copy one variable to another
  *@scr ; array of elements
  *cpy : copied array
  *return :cpy
  */

char *_strcpy(char *cpy, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

/**
  *_strdup - function returns a pointer to the duplicated string
  *@str: array of elements
  *Return: pointer
  */

char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

	if (str == 0)
	{
		return (Null);
	}
	size = _strlen(str) + 1;

	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (Null);
	}
	_strcpy(dst, str);
	return (dst);
}

