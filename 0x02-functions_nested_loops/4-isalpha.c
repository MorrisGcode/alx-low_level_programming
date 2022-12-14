#include "main.h"

/**
  *_isalpha - return 1 if c is a letter, lowercase or uppercase otherwise 0
  *
  *Return : 1 if its a letter otherwise 0
  */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}

