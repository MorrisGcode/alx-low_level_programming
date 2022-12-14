#include "main.h"

/**
  *_islower - checks if character is lowercase if yes returns 1 otherwise 0
  *
  *Return : 0 (success)
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
