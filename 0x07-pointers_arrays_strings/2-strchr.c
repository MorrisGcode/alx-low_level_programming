#include "main.h"
#define NULL 0

/**
  *_strchr - locate char in string and returns pointer there
  *@c: char to be located
  *@s: string
  *Return: pointer to that character in string
  */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;

	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
